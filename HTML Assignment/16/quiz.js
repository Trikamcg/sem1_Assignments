// quiz.js
// Evaluates 10 MCQs in quiz.html and shows per-question feedback + total score.

document.addEventListener('DOMContentLoaded', () => {
  const form = document.querySelector('form');
  if (!form) return;

  // Create a live region for results
  const results = document.createElement('div');
  results.id = 'results';
  results.setAttribute('aria-live', 'polite');
  form.after(results);

  // Answer key based on the values used in quiz.html
  const key = {
    q1: 'HyperText Markup Language',
    q2: 'img',
    q3: 'a',
    q4: 'br',
    q5: 'strong',
    q6: 'th',
    q7: 'alt',
    q8: 'ol',
    q9: 'href',
    q10: 'fieldset'
  };

  form.addEventListener('submit', (e) => {
    e.preventDefault();

    const fd = new FormData(form);
    let score = 0;
    const feedback = [];

    // Evaluate each question
    for (let i = 1; i <= 10; i++) {
      const q = `q${i}`;
      const user = fd.get(q); // null if unanswered
      const correct = key[q];
      const isCorrect = user === correct;

      if (isCorrect) score++;

      // Build feedback text
      const detail = isCorrect
        ? 'Correct'
        : `Wrong (Your: ${user ?? 'No answer'}, Correct: ${correct})`;
      feedback.push(`Q${i}: ${detail}`);

      // Add a small badge ✔ / ✖ to the question legend
      const anyInput = form.querySelector(`input[name="${q}"]`);
      if (anyInput) {
        const fs = anyInput.closest('fieldset');
        if (fs) {
          const legend = fs.querySelector('legend');
          if (legend) {
            // Remove previous badge, if any
            const old = legend.querySelector('.badge');
            if (old) old.remove();
            const badge = document.createElement('span');
            badge.className = 'badge';
            badge.textContent = isCorrect ? ' ✔' : ' ✖';
            legend.appendChild(badge);
          }
        }
      }
    }

    // Render summary
    results.innerHTML = `
      <p><strong>Score:</strong> ${score}/10</p>
      <ul>${feedback.map(line => `<li>${line}</li>`).join('')}</ul>
    `;

    // Scroll to results for visibility
    try {
      window.scrollTo({ top: results.offsetTop, behavior: 'smooth' });
    } catch {
      // Fallback: do nothing if smooth scroll unsupported
    }
  });
});
