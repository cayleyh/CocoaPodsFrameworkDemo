platform :ios, '12.4'

# Works:
use_frameworks!
# use_frameworks! :linkage => :dynamic

# App Crashes On Launch:
# no use_frameworks
# use_frameworks! :linkage => :static

# all frameworks not in Pods/Target Support Files/Pods-DemoApp/Pods-DemoApp-frameworks-Debug-input-files

target 'DemoApp' do
  pod 'LMGUI', '2.0.0'
end

post_install do | installer |
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      # Some dependencies has deploy targets incompatible with XCode 14
      config.build_settings.delete 'IPHONEOS_DEPLOYMENT_TARGET'
    end
  end
end
