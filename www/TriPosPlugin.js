var exec = require('cordova/exec');

module.exports.processSaleRequest = function (arg0, success, error) {
    exec(success, error, 'TriPosPlugin', 'processSaleRequest', [arg0]);
};
