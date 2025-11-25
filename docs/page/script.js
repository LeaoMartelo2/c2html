document.getElementById('changeCursorBtn').addEventListener('click', function() {
            const cursorImage = 'images/cursor_bg.png'; 
            document.body.style.cursor = `url(${cursorImage}), auto`;
});


const video = document.getElementById('myReaction');

video.addEventListener('click', function() {
    video.play();
});
