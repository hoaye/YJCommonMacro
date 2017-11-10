version = "0.0.6";

Pod::Spec.new do |s|

    s.name         = "YJCommonMacro"
    s.version      = version
    s.summary      = "YJCommonMacro 包含 iOS 开发中常用的宏, Author's email:houmanager@Hotmail.com"
    s.description      = <<-DESC
                        YJCommonMacro 包含 iOS 开发中常用便捷的宏, Author's email:houmanager@Hotmail.com
                        DESC
    s.homepage     = "https://github.com/stackhou/YJCommonMacro"
    s.license      = { :type => "MIT", :file => "LICENSE" }
    s.author       = { "houmanager" => "houmanager@Hotmail.com" }
    s.platform     = :ios, "8.0"
    s.source       = { :git => "https://github.com/stackhou/YJCommonMacro.git", :tag => "#{version}"}
    s.source_files  = "YJCommonMacro/*.{h,m}"
    s.requires_arc = true

end
