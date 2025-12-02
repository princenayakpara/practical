// script.js

// smooth scroll for anchor links
document.querySelectorAll('a[href^="#"]').forEach(link => {
  link.addEventListener('click', e => {
    e.preventDefault();
    const target = document.querySelector(link.getAttribute('href'));
    if (target) {
      window.scroll({
        top: target.offsetTop - 60,  // adjust for header height
        behavior: 'smooth'
      });
    }
  });
});

// change navbar style on scroll
window.addEventListener('scroll', () => {
  const nav = document.querySelector('header.navbar');
  if (window.scrollY > 50) {
    nav.classList.add('scrolled');
  } else {
    nav.classList.remove('scrolled');
  }
});
