# encoding: utf-8
require 'rubygems'
require 'rake'
require 'rake/extensiontask'

spec = Gem::Specification.new do |s|
  s.name = "hashfunctions-extension"
  s.email = "martinkozak@martinkozak.net"
  s.author = "Martin Kozák"
  s.platform = Gem::Platform::RUBY
  s.summary = ""
  s.description = ""
  s.homepage = ""
  s.license = "CPL"
  s.version = "1.0.0"
  s.extensions = FileList["ext/generalhashfunctionsc/extconf.rb"]
  s.files = `git ls-files`.split("\n")
end

Gem::PackageTask.new(spec) do |pkg|
end

Rake::ExtensionTask.new('generalhashfunctionsc', spec)
