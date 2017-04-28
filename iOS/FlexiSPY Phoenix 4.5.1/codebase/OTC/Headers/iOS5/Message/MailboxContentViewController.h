/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*#import "UIViewController.h"

#import "AutoFetchControllerDataSource-Protocol.h"
#import "MessageMiniMallObserver-Protocol.h"
#import "TransferMailboxPickerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"*/

/*@class ActivityMonitor, MFMessageViewingContext, MailDetailViewController, MailMessage, MailboxContentSelectionModel, MessageMiniMall, MessageViewController, NSArray, NSMutableArray, NSString, NSTimer, ThreadBannerView, UIActionSheet, UIBarButtonItem, UIImageView, UINavigationController, UISearchBar, UISearchDisplayController, UITableView, UITableViewCell, UIView;*/

@interface MailboxContentViewController : NSObject //UIViewController <MessageMiniMallObserver, UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate, UIActionSheetDelegate, TransferMailboxPickerDelegate, AutoFetchControllerDataSource>
{
    /*MessageMiniMall *_mall;
    MessageMiniMall *_searchMall;
    UITableView *_tableView;
    MessageViewController *_messageViewController;
    MFMessageViewingContext *_viewingContext;
    float _savedContentOffset;
    MailboxContentViewController *_threadViewController;
    ThreadBannerView *_mainThreadBannerView;
    ThreadBannerView *_searchThreadBannerView;
    long long _currentConversationID;
    UIBarButtonItem *_multiEditButtonItem;
    UIBarButtonItem *_searchEditButtonItem;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_moveButtonItem;
    UIBarButtonItem *_markButtonItem;
    UITableViewCell *_cellDimmedDuringCompose;
    UITableViewCell *_quasiSelectedCell;
    MailMessage *_quasiSelectedMessage;
    NSArray *_defaultToolbarItems;
    NSArray *_multiEditBarButtonItems;
    NSArray *_searchBarButtonItems;
    NSArray *_searchMultiEditBarButtonItems;
    NSMutableArray *_selectedMessages;
    NSMutableArray *_reloadMessageQueue;
    UISearchDisplayController *_searchController;
    UISearchBar *_searchBar;
    NSString *_searchText;
    int _searchType;
    NSTimer *_purgeLoadOlderTimer;
    struct __CFDictionary *_commentCache;
    ActivityMonitor *_fetchActivityMonitor;
    UIView *_deleteButtonView;
    UIActionSheet *_actionSheet;
    UINavigationController *_actionSheetNavigationController;
    MailboxContentSelectionModel *_selectionModel;
    MailMessage *_messageToSelectAfterDeletion;
    MailMessage *_initialMessageToDisplay;
    MailMessage *_pendingMessageForDisplayFromSpotlight;
    UIImageView *_pendingMessageOverlayView;
    unsigned int _wasSearchActive:1;
    unsigned int _wasSearchBarFirstResponder:1;
    unsigned int _isOutgoingMailbox:1;
    unsigned int _isDraftsMailbox:1;
    unsigned int _isEditableMailbox:1;
    unsigned int _isOutbox:1;
    unsigned int _inEditMode:1;
    unsigned int _messageLayerShouldPurge:1;
    unsigned int _isShowingSwipeDeleteConfirmation:1;
    unsigned int _settingSearchText:1;
    unsigned int _isDismissing:1;
    unsigned int _shouldSelectInitialMessage:1;
    unsigned int _shouldKeepSelectionVisible:2;
    unsigned int _searchResultsTableViewIsLoaded:1;
    unsigned int _currentMessageOutsideSearchResults:1;
    unsigned int _savedContentOffsetIsValid:1;
    unsigned int _userChoseSearchType:1;
    unsigned int _isDeletingMessages:1;
    unsigned int _anySourceSupportsSearch:1;
    unsigned int _isMovingAllMessages:1;
    unsigned int _shouldBlockRowReloads:1;
    unsigned int _isShowingMainLoadMoreButton:1;
    unsigned int _isShowingSearchLoadMoreButton:1;
    unsigned int _isThreadedMCVC:1;
    unsigned int _willPop:1;
    unsigned int _shouldFadeOutSelectionOnDisappear:1;
    unsigned int _didFadeOutSelectionOnDisappear:1;
    unsigned int _preventNextScrollbarFlash:1;
    unsigned int _preventScrollOnNextAppear:1;
    unsigned int _preventMessageSelection:1;
    unsigned int _ignoringUserInteractionForDelete:1;
    unsigned int _ignoringUserInteractionForDraftRefresh:1;
    unsigned int _useSpecialDeleteAnimation:1;
    unsigned int _deselectingDeletedRow:1;
    unsigned int _isDismissingActionSheet:1;
    unsigned int _viewIsVisible:1;*/
}

- (id)init;
- (id)initWithSource:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setMailboxes:(id)arg1;
- (void)addSource:(id)arg1;
- (void)removeAllSources;
- (void)restoreContentOffset;
- (void)_updateScopeButtonsForOrientation:(int)arg1;
//@property(readonly, nonatomic) MailDetailViewController *mailDetailViewController;
@property(readonly, nonatomic) BOOL isEditableMailbox;
@property(readonly, nonatomic) BOOL isDeletingMessages;
@property(readonly, nonatomic) BOOL viewIsVisible;
- (void)loadView;
- (void)_updateStatusBarWithOurSources;
- (void)_updateLandscapeThreadNavigation;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillFirstAppear:(BOOL)arg1;
- (BOOL)_isDisplayingSearchResults;
- (id)currentTableView;
- (void)viewWillReappear:(BOOL)arg1;
- (void)preventNextScrollbarFlash;
- (void)preventScrollOnNextAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)removedFromMailNavigationController:(id)arg1;
- (BOOL)snapshotOnTermination;
- (void)_clearSuspendedSearchState;
- (void)_suspendSearchController;
- (void)_resumeSearchControllerAnimated:(BOOL)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewDidUnload;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingHeaderView;
//- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)_popIfNecessary;
- (void)_popIfNecessaryWithDelay:(double)arg1;
- (void)setShouldFadeOutSelectionOnDisappear:(BOOL)arg1;
- (void)_changeSetHadError:(id)arg1;
- (void)_autoFetchSelectedMailbox:(id)arg1;
- (void)_focusedMessageChanged:(id)arg1;
- (void)_updateTableForSettingsOrTimeChange:(id)arg1;
- (void)_deliveryQueueProcessingStart:(id)arg1;
- (void)_deliveryQueueProcessingStop:(id)arg1;
- (void)_popoverWillBePresented:(id)arg1;
- (id)deleteButtonItem;
- (id)moveButtonItem;
- (id)markButtonItem;
- (id)currentEditButtonItem;
- (BOOL)allowDeleteAll;
- (void)updateToolbarButtonTitles;
- (void)updateCurrentEditButton;
- (void)updateToolbarButtons;
- (void)updateNavigationBarButtons;
- (void)updateBarButtons;
//@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)_completeBulkMarkMessages;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_setInEditMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_cancelEditModeAnimated:(BOOL)arg1;
- (void)_setScopeBarEnabled:(BOOL)arg1;
- (int)_stackViewTransferOptions;
- (void)editButtonClicked:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)_beginMessageDeletionAnimation;
- (void)_expandDeleteButtonView:(void *)arg1;
- (void)_deleteExpandAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_deleteShrinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_deleteSelectedMessages;
- (void)_reallyDeleteMessages:(id)arg1;
- (void)transferButtonClicked:(id)arg1;
- (void)bulkMarkButtonClicked:(id)arg1;
- (void)_bulkMarkMessages:(id)arg1 asRead:(BOOL)arg2;
- (void)_bulkMarkMessages:(id)arg1 asFlagged:(BOOL)arg2;
- (BOOL)canResignFocus;
- (BOOL)canDismiss;
- (void)willDismiss:(BOOL)arg1;
- (void)_clearIsDismissing;
- (void)didDismiss:(BOOL)arg1;
- (void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3;
- (void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(BOOL)arg2;
- (void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(BOOL)arg3;
- (void)resignPreparedForTransferOfMessages:(BOOL)arg1;
- (void)fetchButtonClicked:(id)arg1;
- (void)restoreDraftOrOutboxMessage:(id)arg1;
- (void)selectInitialMessageASAP;
- (void)_selectInitialMessageNowWithOptions:(unsigned int)arg1;
- (void)selectInitialMessageWhenAvailable;
- (void)_statusBarProgressDidHide:(id)arg1;
- (id)_loadMoreCellForMall:(id)arg1;
- (id)_loadMoreCellForTable:(id)arg1;
- (int)_loadTaskStateForMall:(id)arg1;
- (void)_updateLoadMoreButton:(id)arg1 withMall:(id)arg2;
- (void)_loadOlderMessagesForMall:(id)arg1;
- (void)dimSelectedMessageForCompose:(BOOL)arg1;
- (id)messageToSelectAfterDeletedMessages:(id)arg1 mall:(id *)arg2;
- (void)prepareForSpecialDeleteAnimation;
- (void)commitSpecialDeleteAnimationWithMessages:(id)arg1;
- (void)updateSelectionAnimated:(BOOL)arg1;
- (void)_updateViewingContextToMessage:(id)arg1;
- (void)displayMessage:(id)arg1 animated:(BOOL)arg2;
- (void)displayMessage:(id)arg1 options:(unsigned int)arg2 animated:(BOOL)arg3;
- (id)displayThreadedViewForMessage:(id)arg1 mall:(id)arg2 animate:(BOOL)arg3;
- (void)_setIsThreadedMCVC:(BOOL)arg1;
- (id)_firstMessageSubject;
- (void)updateTitle;
- (void)_unreadCountChanged:(id)arg1;
- (void)_displayNameChanged:(id)arg1;
- (id)copySourcesCurrentlyVisible;
- (void)willPerformVisibleStoreFetch:(id)arg1;
- (id)messagesForRow:(unsigned int)arg1 inTableView:(id)arg2;
- (void)_updateSelectedMessages;
- (id)_selectedMessages;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfRowsInTable:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)_tableViewRowSwipeDeletionAnimationDidStop:(BOOL)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (struct CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(void *)arg3;
- (void)_tableView:(id)arg1 rowDeletionAnimationDidStop:(BOOL)arg2;
- (void)setRowDeletionEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)rowDeletionEnabledAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_reloadTableData:(id)arg1;
- (void)_selectInitialMessageIfNecessaryAndDisplayImmediately:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (void)_setCurrentMessageOutsideSearchResults:(BOOL)arg1;
- (void)_updateCurrentMessageOutsideSearchResultsAnimated:(BOOL)arg1;
- (void)_ensureRowVisible:(unsigned int)arg1 withTableView:(id)arg2 animated:(BOOL)arg3;
- (id)_displayedMessage;
- (void)_selectRowOfDisplayedMessageInTableView:(id)arg1 scrollToVisible:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_selectRowOfMessage:(id)arg1 inTableView:(id)arg2 scrollToVisible:(BOOL)arg3 selectionFadeDuration:(float)arg4;
- (void)_deselectRowOfDisplayedMessageInTableView:(id)arg1 animated:(BOOL)arg2;
- (void)_deselectRowOfDisplayedMessageInTableView:(id)arg1 selectionFadeDuration:(float)arg2;
- (void)_setRowOfDisplayedMessageQuasiSelected:(BOOL)arg1;
//@property(retain, nonatomic) UITableViewCell *quasiSelectedCell;
- (void)handleConnectionEstablished:(id)arg1;
- (void)_connectionEstablished:(id)arg1;
- (void)handleMallStartedFetch:(id)arg1;
- (void)miniMallStartFetch:(id)arg1;
- (void)miniMallLoadMoreChanged:(id)arg1;
- (void)miniMallDidLoadMessages:(id)arg1;
- (void)miniMallMessageCountChanged:(id)arg1;
- (void)miniMallCurrentMessageRemoved:(id)arg1;
- (void)miniMallDidFinishLocalSearch:(id)arg1;
- (void)miniMallDidFinishServerSearch:(id)arg1;
- (void)miniMallMessageAtIndexChanged:(id)arg1;
- (void)mailboxUpdatedWithNoChanges:(id)arg1;
- (id)_mallForTableView:(id)arg1;
- (id)_tableViewForMall:(id)arg1;
- (BOOL)_isShowingLoadMoreForTableView:(id)arg1;
- (void)_setShowingLoadMore:(BOOL)arg1 forTableView:(id)arg2;
- (void)_updateNoResultsMessageVisible;
- (void)purgeMemoryForReason:(int)arg1;
- (id)cachedAddressCommentForString:(id)arg1;
- (void)_presentDefaultPNG;
- (void)_dismissDefaultPNG;
- (void)_libraryBecameUnavailable:(id)arg1;
- (void)displayMessageFromSpotlight:(id)arg1;
- (id)sources;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_beginBlockingBackgroundOperations;
- (void)_endBlockingBackgroundOperations;
- (BOOL)isSearching;
- (BOOL)shouldDisplaySearchEditButtons;
- (id)mall;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (int)propagateChangeDownwards:(id)arg1;
- (BOOL)shouldHideWhenRotatingToPortraitOrientation;
- (void)_beginIgnoringUserInteractionForDraftRefresh;
- (void)_endIgnoringUserInteractionForDraftRefresh;
- (BOOL)allowBackNavigationForSlidableMasterSplitViewController:(id)arg1;
//@property(retain, nonatomic) MailMessage *quasiSelectedMessage; // @synthesize quasiSelectedMessage=_quasiSelectedMessage;
//@property(retain, nonatomic) MailMessage *initialMessageToDisplay; // @synthesize initialMessageToDisplay=_initialMessageToDisplay;
@property(nonatomic) long long currentConversationID; // @synthesize currentConversationID=_currentConversationID;
//@property(retain, nonatomic) MessageViewController *messageViewController; // @synthesize messageViewController=_messageViewController;

@end
