# encoding: utf-8
require 'rubygems'
require 'rake'
require 'rake/extensiontask'

spec = Gem::Specification.new do |s|
  s.name = "hashfunctions-extension"
  s.email = "martinkozak@martinkozak.net"
  s.author = "Martin Kozák"
  s.platform = Gem::Platform::RUBY
  s.summary = "11 fast hash functions for general non-cryptographic use."
  s.description = "Contains 11 fast hash functions for general non-cryptographic use implemented originally by Arash Partow. The Ruby C extension."
  s.homepage = "http://github.com/martinkozak/hashfunctions-extension"
  s.license = "CPL"
  s.version = "1.0.0"
  s.extensions = FileList["ext/generalhashfunctions_ext/extconf.rb"]
  s.files = `git ls-files`.split("\n")
  s.add_development_dependency("rake-compiler", ">= 0")
  s.add_development_dependency("rake", ">= 0")
end

Gem::PackageTask.new(spec) do |pkg|
end

Rake::ExtensionTask.new('generalhashfunctions_ext', spec)
