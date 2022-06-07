Pod::Spec.new do |s|
  s.name             = "SpreoPod"
  s.version          = "2.47"
  s.summary          = "Indoor navigation SDK - SpreoPod"
 
  s.description      = "A longer description of SpreoPod in Markdown format."
 
  s.homepage         = "https://github.com/SpreoLLC/SpreoPod"
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "alozovoy" => "a.lozovoy@belitsoft.com" }
  s.source           = { :git => "https://github.com/SpreoLLC/SpreoPod.git", :tag => s.version.to_s }
 
  s.platform     = :ios, '9.0'
  
  s.vendored_frameworks = "Classes/IndoorKit.framework"

  s.exclude_files = "Classes/IndoorKit.bundle/Info.plist"

  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.resource_bundles = {
    'IndoorKit' => ['Classes/IndoorKit.bundle/**']
  }

  s.dependency 'GoogleMaps', '3.8.0'
  s.requires_arc          = true
  
end
