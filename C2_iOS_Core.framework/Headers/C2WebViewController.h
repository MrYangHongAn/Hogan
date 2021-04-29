//
//  C2WebViewController.h
//  C2-iOS-Base
//
//  Created by watson on 2020/6/17.
//  Copyright © 2020 watson. All rights reserved.
//

#import "C2BaseViewController.h"
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface C2WebViewController : C2BaseViewController

- (instancetype)initWithUrl:(NSString *)url;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, assign) NSInteger tag;

@property (nonatomic, assign) BOOL canGoBack;

@property (nonatomic, strong) WKWebView *webView;

@property (nonatomic, strong) UIProgressView *progressView;

@property (nonatomic, strong) UIButton *backButton;

@property (nonatomic, strong) UIButton *closeButtion;

- (void)actionPopBack;

//- (void)loadUrl;

@end

NS_ASSUME_NONNULL_END
