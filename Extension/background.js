function eb() {
    var flags = {
        url: window.chrome.extension.getURL("main_ui.html"),
        type: "popup",
        left: 1,
        top: 1,
        width: 400,
        height: window.screen.availHeight - 1 - 1,
        focused: true
    };
    window.chrome.windows.create(flags);
}

document.addEventListener('DOMContentLoaded', function() {
  eb();
});
