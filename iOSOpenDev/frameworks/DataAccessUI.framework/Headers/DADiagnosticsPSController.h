/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

#import <DataAccessUI/XXUnknownSuperclass.h>
#import <DataAccessUI/UIAlertViewDelegate.h>
#import <DataAccessUI/DADiagnosticSaveNotesDelegate.h>

@class UIAlertView;

@interface DADiagnosticsPSController : XXUnknownSuperclass <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate> {
@private
	UIAlertView *_simpleAlert;	// 240 = 0xf0
	UIAlertView *_savingDataAlert;	// 244 = 0xf4
	SEL _simpleConfirmSheetDismissedSEL;	// 248 = 0xf8
}
+ (id)dumpRuntimeStateSpecifiers;	// 0x5f99
+ (id)linkSpecifier;	// 0x5eb5
+ (BOOL)diagnosticsVisible;	// 0x5ea9
- (void)purgeFileAtPath:(id)path;	// 0x72cd
- (id)pathsOfPurgableFiles;	// 0x72bd
- (id)pathsOfAllLogFiles;	// 0x72a1
- (void)handleClearAllLogsForSpecifier:(id)specifier;	// 0x71f5
- (void)suspend;	// 0x71a1
- (void)handleSaveAllLogsForSpecifier:(id)specifier;	// 0x6f8d
- (void)_dismissSavingDataAlert;	// 0x6f1d
- (void)handleSaveAllLogsStep2;	// 0x6dfd
- (void)_presentNotesController;	// 0x6c21
- (void)saveNotesInBackground:(id)background;	// 0x6c11
- (void)saveLogsWithNotes:(id)notes;	// 0x66d9
- (BOOL)saveFileAtPath:(id)path toDirectory:(id)directory withExtension:(id)extension error:(id *)error;	// 0x65d5
- (id)savedLogsDirectoryNameForSpecifier:(id)specifier;	// 0x65c9
- (void)handleDumpRuntimeStateForSpecifier:(id)specifier;	// 0x65a9
- (BOOL)isLoggingEnabledForSpecifier:(id)specifier;	// 0x659d
- (void)setLoggingEnabled:(BOOL)enabled forSpecifier:(id)specifier;	// 0x6599
- (id)booleanPropertyWithSpecifier:(id)specifier;	// 0x6525
- (void)setBooleanProperty:(id)property withSpecifier:(id)specifier;	// 0x64b9
- (void)runSimpleAlertWithTitle:(id)title message:(id)message;	// 0x6439
- (void)runSimpleAlertWithTitle:(id)title message:(id)message dismissedSelector:(SEL)selector;	// 0x6345
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x62ed
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x6265
- (void)dealloc;	// 0x6205
- (id)specifiers;	// 0x611d
- (id)diagnosticSpecifiers;	// 0x60a9
@end