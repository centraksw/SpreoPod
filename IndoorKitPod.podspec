Pod::Spec.new do |s|
  s.name             = "IndoorKitPod"
  s.version          = "0.0.1"
  s.summary          = "Indoor navigation SDK - IndoorKitPod"
 
  s.description      = "A longer description of IndoorKitPod in Markdown format."
 
  s.homepage         = "https://github.com/SpreoLLC/IndoorKitPod"
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "Yurain" => "yurain91@gmail.com" }
  s.source           = { :git => "https://github.com/SpreoLLC/IndoorKitPod.git", :tag => s.version.to_s }
 
  s.platform     = :ios, '8.0'
  
  s.vendored_frameworks = "Classes/IndoorKit.framework"

  s.resource_bundles = {
    'IndoorKit' => ['Classes/IndoorKit.bundle/**']
  }

  s.dependency 'GoogleMaps'
  s.requires_arc          = true
 
end