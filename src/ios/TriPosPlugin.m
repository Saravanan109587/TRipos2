 
#import <Cordova/CDV.h>
 #import <TriPosPlugin.h>
 
@implementation TriPos
- (void)processSaleRequest:(CDVInvokedUrlCommand*)command
{
    CDVPluginResult* pluginResult = nil;
      CDVPluginResult *pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK];
    [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
}
  
@end
