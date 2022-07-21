file(REMOVE_RECURSE
  "a3-written.pdb"
  "a3-written"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/a3-written.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
