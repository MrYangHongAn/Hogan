
Pod::Spec.new do |spec|

  spec.name         = "C2_iOS_Core.podpec"
  spec.version      = "0.0.1"
  spec.summary      = "C2_iOS_Core.podpec."
  spec.description  = <<-DESC
                   DESC
  spec.homepage     = "https://github.com/MrYangHongAn/Hogan"
  spec.license      = "MIT "

  spec.author             = { "hogan" => "673606367@qq.com" }
  spec.source       = { :git => "https://github.com/MrYangHongAn/Hogan", :tag => "#{spec.version}" }

  spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  spec.exclude_files = "Classes/Exclude"
end
