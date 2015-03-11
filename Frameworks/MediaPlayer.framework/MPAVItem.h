/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVAsset, AVPlayerItem, AVPlayerItemAccessLog, MPAVController, MPAlternateTextTrack, MPAlternateTracks, MPMediaItem, MPQueueFeeder, NSArray, NSData, NSObject<OS_dispatch_queue>, NSString, NSURL, RURadioAdTrack, RadioArtworkCollection, RadioAudioClip, RadioStreamTrack, RadioTrack;

@interface MPAVItem : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    unsigned int _advancedDuringPlayback : 1;
    unsigned int _handledFinishTime : 1;
    unsigned int _hasPlayedThisSession : 1;
    unsigned int _wasCountedAsSkipped : 1;
    unsigned int _watchingAttributes : 1;
    unsigned int _userChangedItemsDuringPlayback : 1;
    unsigned int _lyricsAvailable : 1;
    unsigned int _timeMarkersNeedLoading : 1;
    unsigned int _isStreamable : 2;
    long long _albumStoreID;
    MPAlternateTracks *_alternateTracks;
    NSArray *_artworkTimeMarkers;
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    AVPlayerItem *_avPlayerItem;
    NSArray *_buyOffers;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    NSArray *_chapterTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    NSString *_copyrightText;
    float _defaultPlaybackRate;
    MPQueueFeeder *_feeder;
    unsigned long long _indexInQueueFeeder;
    float _loudnessInfoVolumeNormalization;
    MPMediaItem *_mediaItem;
    MPAVController *_player;
    } _playerItemDuration;
    double _seekableTimeRangesCacheTime;
    float _soundCheckVolumeNormalization;
    long long _storeID;
    unsigned long long _type;
    NSArray *_urlTimeMarkers;
    bool_didAttemptToLoadAsset;
    bool_hasPostedNaturalSizeChange;
    bool_hasValidPlayerItemDuration;
    bool_isAssetLoaded;
    bool_limitReadAhead;
}

@property(readonly) AVPlayerItemAccessLog * accessLog;
@property(readonly) RURadioAdTrack * adTrack;
@property(readonly) NSString * album;
@property(readonly) NSString * albumArtist;
@property(copy,readonly) NSString * albumBuyButtonText;
@property(readonly) long long albumBuyButtonType;
@property(readonly) long long albumStoreID;
@property(readonly) unsigned long long albumTrackCount;
@property(readonly) unsigned long long albumTrackNumber;
@property(readonly) bool allowsEQ;
@property(readonly) MPAlternateTracks * alternateTracks;
@property(readonly) NSString * artist;
@property(retain) NSArray * artworkTimeMarkers;
@property(readonly) AVAsset * asset;
@property(copy,readonly) NSString * assetFlavor;
@property(readonly) RadioAudioClip * audioClip;
@property(copy,readonly) NSArray * buyOffers;
@property(readonly) bool canSeedGenius;
@property(retain) NSArray * chapterTimeMarkers;
@property(retain) NSArray * closedCaptionTimeMarkers;
@property(readonly) NSString * composer;
@property(copy,readonly) NSString * copyrightText;
@property(readonly) unsigned long long countForQueueFeeder;
@property(readonly) double currentTimeDisplayOverride;
@property(readonly) long long customAVEQPreset;
@property float defaultPlaybackRate;
@property(readonly) bool didAttemptToLoadAsset;
@property(readonly) unsigned long long discCount;
@property(readonly) unsigned long long discNumber;
@property(readonly) NSString * displayableText;
@property(readonly) bool displayableTextLoaded;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) double durationFromExternalMetadata;
@property(readonly) double durationIfAvailable;
@property(readonly) bool durationIsValid;
@property(readonly) RadioArtworkCollection * effectiveArtworkCollection;
@property(getter=isExplicitTrack,readonly) bool explicitTrack;
@property MPQueueFeeder * feeder;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property(readonly) NSString * genre;
@property(readonly) bool hasDisplayableText;
@property bool hasPlayedThisSession;
@property unsigned long long indexInQueueFeeder;
@property(readonly) bool isAd;
@property(readonly) bool isAlwaysLive;
@property bool isAssetLoaded;
@property(readonly) bool isCloudItem;
@property(readonly) bool isRadioItem;
@property(readonly) bool isStreamingQuality;
@property(readonly) NSString * localizedPositionInPlaylistString;
@property float loudnessInfoVolumeNormalization;
@property(readonly) NSString * lyrics;
@property(readonly) NSString * mainTitle;
@property(retain,readonly) MPMediaItem * mediaItem;
@property(copy,readonly) NSString * mpuReporting_externalID;
@property(copy,readonly) NSString * mpuReporting_featureName;
@property(readonly) bool mpuReporting_isValidReportingItem;
@property(readonly) unsigned long long mpuReporting_itemType;
@property(readonly) bool mpuReporting_shouldReportPlayEventsToStore;
@property(copy,readonly) NSString * mpuReporting_storeItemID;
@property(copy,readonly) NSData * mpuReporting_trackInfo;
@property(readonly) struct CGSize { double x1; double x2; } naturalSize;
@property(readonly) unsigned long long persistentID;
@property(readonly) double playableDuration;
@property(readonly) double playableDurationIfAvailable;
@property double playbackCheckpointCurrentTime;
@property MPAVController * player;
@property(readonly) AVPlayerItem * playerItem;
@property(readonly) NSURL * podcastURL;
@property(readonly) struct CGSize { double x1; double x2; } presentationSize;
@property(readonly) RadioTrack * radioTrack;
@property(retain) MPAlternateTextTrack * selectedAlternateTextTrack;
@property float soundCheckVolumeNormalization;
@property(readonly) long long status;
@property(readonly) long long storeID;
@property(readonly) RadioStreamTrack * streamTrack;
@property(getter=isStreamable,readonly) bool streamable;
@property(readonly) bool supportsRadioTrackActions;
@property(readonly) bool supportsRewindAndFastForward15Seconds;
@property(readonly) bool supportsSettingCurrentTime;
@property(readonly) bool supportsSkip;
@property(readonly) double timeOfSeekableEnd;
@property(readonly) double timeOfSeekableStart;
@property(readonly) NSArray * timedMetadataIfAvailable;
@property(readonly) unsigned long long type;
@property(retain) NSArray * urlTimeMarkers;
@property(readonly) bool useEmbeddedChapterData;
@property bool userAdvancedDuringPlayback;
@property bool userChangedItemsDuringPlayback;
@property(readonly) float userRating;
@property(copy) NSString * videoID;

+ (id)URLFromPath:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (unsigned long long)defaultScaleMode;
+ (id)mpuReporting_allMediaItemProperties;
+ (void)setDefaultScaleMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)MPSPWD_prioritizeDownloadSession;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_captionAppearanceSettingsChanged;
- (void)_checkAllowsBlockingDurationCall;
- (void)_clearAsset;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)_durationInSeconds;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (void)_loadAssetAndPlayerItem;
- (void)_loadAssetProperties;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_playerItemDurationIfAvailable;
- (void)_playerItemNewAccessLogEntryNotification:(id)arg1;
- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (id)_seekableTimeRanges;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (id)accessLog;
- (id)adTrack;
- (void)addDerivedStationForArtist:(bool)arg1 withCompletionHandler:(id)arg2;
- (id)aggregateDictionaryItemIdentifier;
- (id)album;
- (id)albumArtist;
- (id)albumBuyButtonText;
- (long long)albumBuyButtonType;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (bool)allowsEQ;
- (id)alternateTracks;
- (unsigned long long)alternatesCountForTypes:(unsigned long long)arg1;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)asset;
- (id)assetFlavor;
- (id)audioClip;
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)buyOffers;
- (bool)canSeedGenius;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)closedCaptionTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (unsigned long long)countForQueueFeeder;
- (double)currentTimeDisplayOverride;
- (long long)customAVEQPreset;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (bool)didAttemptToLoadAsset;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (bool)displayableTextLoaded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (double)durationInSeconds;
- (bool)durationIsValid;
- (id)effectiveArtworkCollection;
- (id)feeder;
- (void)flushNowPlayingCaches;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)genre;
- (bool)hasAlternatesForTypes:(unsigned long long)arg1;
- (bool)hasDataForItemArtwork;
- (bool)hasDisplayableText;
- (bool)hasPlayedThisSession;
- (id)inBandAlternateTextTracks;
- (unsigned long long)indexInQueueFeeder;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isAd;
- (bool)isAlwaysLive;
- (bool)isAssetLoaded;
- (bool)isAssetURLValid;
- (bool)isCloudItem;
- (bool)isExplicitTrack;
- (bool)isRadioItem;
- (bool)isStreamable;
- (bool)isStreamingQuality;
- (bool)isSupportedDefaultPlaybackSpeed:(unsigned long long)arg1;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (bool)limitReadAhead;
- (void)loadAssetAndPlayerItem;
- (id)localeForAssetTrack:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (float)loudnessInfoVolumeNormalization;
- (id)lyrics;
- (id)mainTitle;
- (id)mediaItem;
- (id)mpuReporting_externalID;
- (id)mpuReporting_featureName;
- (bool)mpuReporting_isValidReportingItem;
- (unsigned long long)mpuReporting_itemType;
- (bool)mpuReporting_shouldReportPlayEventsToStore;
- (id)mpuReporting_storeItemID;
- (id)mpuReporting_trackInfo;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)notePlaybackFinishedByHittingEnd;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)path;
- (unsigned long long)persistentID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (double)playbackCheckpointCurrentTime;
- (float)playbackRateForLevel:(unsigned long long)arg1 direction:(long long)arg2 paused:(bool)arg3;
- (id)player;
- (id)playerItem;
- (id)podcastURL;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)radioTrack;
- (void)reevaluateType;
- (void)replaceOutOfBandAlternateTextTracksWithArray:(id)arg1;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)resetBookkeeping;
- (float)scanIntervalForLevel:(unsigned long long)arg1 paused:(bool)arg2;
- (id)selectedAlternateTextTrack;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setArtworkTimeMarkers:(id)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setFeeder:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHasPlayedThisSession:(bool)arg1;
- (void)setIndexInQueueFeeder:(unsigned long long)arg1;
- (void)setIsAssetLoaded:(bool)arg1;
- (void)setLimitReadAhead:(bool)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setUrlTimeMarkers:(id)arg1;
- (void)setUserAdvancedDuringPlayback:(bool)arg1;
- (void)setUserChangedItemsDuringPlayback:(bool)arg1;
- (void)setUserSkippedPlayback:(bool)arg1;
- (void)setVideoID:(id)arg1;
- (void)setupEQPresetWithDefaultPreset:(long long)arg1;
- (void)setupPlaybackInfo;
- (float)soundCheckVolumeNormalization;
- (long long)status;
- (long long)storeID;
- (id)streamTrack;
- (int)subtitleTrackID;
- (bool)supportsRadioTrackActions;
- (bool)supportsRewindAndFastForward15Seconds;
- (bool)supportsSettingCurrentTime;
- (bool)supportsSkip;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (id)timedMetadataIfAvailable;
- (id)titlesForTime:(double)arg1;
- (unsigned long long)type;
- (id)url;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkers;
- (bool)useEmbeddedChapterData;
- (bool)userAdvancedDuringPlayback;
- (bool)userChangedItemsDuringPlayback;
- (float)userRating;
- (bool)userSkippedPlayback;
- (id)videoID;

@end