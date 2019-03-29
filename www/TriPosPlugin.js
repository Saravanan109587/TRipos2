var exec = require('cordova/exec');

//
// Copyright (c) 2014 PayPal. All rights reserved.
//

/**
 * This class exposes the PayPal iOS SDK functionality to javascript.
 *
 * @constructor
 */
function TriPosPlugin() {}
 
/**
 * Retrieve the version of the PayPal iOS SDK library. Useful when contacting support.
 *
 * @param {Function} completionCallback: a callback function accepting a string
 */
TriPosPlugin.prototype.version = function(arg0, success, error) {
  var failureCallback = function() {
    console.log("Could not retrieve PayPal library version");
  };

  cordova.exec(success, error, "TriPosPlugin", "processSaleRequest",  [arg0]class);
};

// module.exports.processSaleRequest = function (arg0, success, error) {
//     exec(success, error, 'TriPosPlugin', 'processSaleRequest', [arg0]);
// };
