Pod::Spec.new do |s|
  s.name             = "SpreoPod"
  s.version          = "2.1"
  s.summary          = "Indoor navigation SDK - SpreoPod"
 
  s.description      = "A longer description of SpreoPod in Markdown format."
 
  s.homepage         = "https://github.com/SpreoLLC/SpreoPod"
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { "Yurain" => "yurain91@gmail.com" }
  s.source           = { :git => "https://github.com/SpreoLLC/SpreoPod.git", :tag => s.version.to_s }
 
  s.platform     = :ios, '8.0'
  
  s.vendored_frameworks = "Classes/IndoorKit.framework"

  s.resource_bundles = {
    'IndoorKit' => ['Classes/IndoorKit.bundle/**']
  }

  s.dependency 'GoogleMaps'
  s.requires_arc          = true
 
end
