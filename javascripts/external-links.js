document.addEventListener('DOMContentLoaded', function() {
    var links = document.querySelectorAll('a[href^="http"]');
    for (var i = 0; i < links.length; i++) {
        links[i].setAttribute('target', '_blank');
        // 可选：增加安全属性（推荐）
        links[i].setAttribute('rel', 'noopener noreferrer');
    }
});