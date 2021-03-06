//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SMFoundation/SMViewController.h>

#import "SMDeclarativeInspectorGeneratorDelegate-Protocol.h"

@class NSArray, NSArrayController, NSMutableDictionary, NSSet, NSString, NSTextField, SMTabbedInspector;

__attribute__((visibility("hidden")))
@interface SMComponentsInspector : SMViewController <SMDeclarativeInspectorGeneratorDelegate>
{
    BOOL _smExternalPantherEditMode;
    BOOL _smExternalTigerEditMode;
    NSArray *_treeNodes;
    NSArray *_imageResources;
    NSArray *_soundResources;
    SMTabbedInspector *_inspector;
    NSTextField *_noSelectionLabel;
    NSSet *_commonCategories;
    NSArray *_inspectedComponents;
    NSArrayController *_componentsController;
    NSMutableDictionary *_categorizedComponentControllers;
    unsigned long long _rectangleType;
    NSArray *_arrangeMenuItems;
}

@property(nonatomic) BOOL smExternalTigerEditMode; // @synthesize smExternalTigerEditMode=_smExternalTigerEditMode;
@property(nonatomic) BOOL smExternalPantherEditMode; // @synthesize smExternalPantherEditMode=_smExternalPantherEditMode;
@property(retain, nonatomic) NSArray *arrangeMenuItems; // @synthesize arrangeMenuItems=_arrangeMenuItems;
@property(nonatomic) unsigned long long rectangleType; // @synthesize rectangleType=_rectangleType;
@property(retain, nonatomic) NSMutableDictionary *categorizedComponentControllers; // @synthesize categorizedComponentControllers=_categorizedComponentControllers;
@property(retain, nonatomic) NSArrayController *componentsController; // @synthesize componentsController=_componentsController;
@property(copy, nonatomic) NSArray *inspectedComponents; // @synthesize inspectedComponents=_inspectedComponents;
@property(copy, nonatomic) NSSet *commonCategories; // @synthesize commonCategories=_commonCategories;
@property(nonatomic) __weak NSTextField *noSelectionLabel; // @synthesize noSelectionLabel=_noSelectionLabel;
@property(retain, nonatomic) SMTabbedInspector *inspector; // @synthesize inspector=_inspector;
@property(copy, nonatomic) NSArray *soundResources; // @synthesize soundResources=_soundResources;
@property(copy, nonatomic) NSArray *imageResources; // @synthesize imageResources=_imageResources;
@property(copy, nonatomic) NSArray *treeNodes; // @synthesize treeNodes=_treeNodes;
- (void).cxx_destruct;
- (id)createDateFormatSampleProperty:(id)arg1;
- (id)createAdvancedTenFourDateFormatProperty:(id)arg1;
- (id)createBasicTenFourDateFormatProperty:(id)arg1;
- (id)createPreTenFourDateFormatSampleProperty:(id)arg1;
- (id)createAdvancedPreTenFourDateFormatProperty:(id)arg1;
- (id)createBasicPreTenFourDateFormatProperty:(id)arg1;
- (id)createPrioritiesListProperty:(id)arg1;
- (id)createArrayProperty:(id)arg1;
- (id)createAutoresizingProperty:(id)arg1;
- (id)declarativeInspectorGenerator:(id)arg1 createPropertyForConfiguration:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)alignRightEdges:(id)arg1;
- (void)alignHorizontalCenters:(id)arg1;
- (void)alignLeftEdges:(id)arg1;
- (void)alignBottomEdges:(id)arg1;
- (void)alignVerticalCenters:(id)arg1;
- (void)alignTopEdges:(id)arg1;
- (void)fillVertically:(id)arg1;
- (void)fillHorizontally:(id)arg1;
- (void)centerVertically:(id)arg1;
- (void)centerHorizontally:(id)arg1;
- (void)selectInspectorWithIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL availableForMacOSX1080AndLater;
- (id)commonSuperviewComponent;
- (id)inspectedViewComponents;
- (void)updatedTreeNodes;
- (void)createArrangeMenuItems;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

