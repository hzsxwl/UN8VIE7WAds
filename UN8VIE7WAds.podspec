#
# Be sure to run `pod lib lint UN8VIE7WAds.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'UN8VIE7WAds'
  s.version          = '5.8.0'
  s.summary          = 'ads sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzsxwl/UN8VIE7WAds'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '3318596470@qq.com' => '3318596470@qq.com' }
  s.source           = { :git => 'https://github.com/hzsxwl/UN8VIE7WAds.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

     s.ios.deployment_target = '11.0'

    s.source_files = 'UN8VIE7WAds/Classes/**/*'
  s.public_header_files = ['UN8VIE7WAds/Classes/**/WtmAdsSDK.h', 'UN8VIE7WAds/Classes/**/WtmRequest.h', 'UN8VIE7WAds/Classes/**/WtmSplash.h', 'UN8VIE7WAds/Classes/**/WtmInterstitial.h', 'UN8VIE7WAds/Classes/**/WtmReward.h', 'UN8VIE7WAds/Classes/**/WtmAdSdk.h', 'UN8VIE7WAds/Classes/**/WtmBanner.h', 'UN8VIE7WAds/Classes/**/WtmNativeAdView.h', 'UN8VIE7WAds/Classes/**/WtmNativeAd.h', 'UN8VIE7WAds/Classes/**/WtmNativeAdManager.h']
  s.vendored_libraries = 'UN8VIE7WAds/Libraries/libUN8VIE7WAds-iOS.a'
  
  s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','4.7.0'
  s.dependency 'ToBid-iOS/BaiduAdapter','4.7.0'
  s.dependency 'ToBid-iOS/KSAdapter','4.7.0'
  s.dependency 'ToBid-iOS/TouTiaoAdapter','4.7.0'
  s.dependency 'ToBid-iOS/CSJMediationAdapter','4.7.0'
  s.dependency 'ToBid-iOS/AdScopeAdapter','4.7.0'
  s.static_framework = true
end
