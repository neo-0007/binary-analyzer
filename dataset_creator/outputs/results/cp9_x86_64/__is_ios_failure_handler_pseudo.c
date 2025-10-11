
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__is_ios_failure_handler(__cxxabiv1::__class_type_info const*) */

undefined8 std::__is_ios_failure_handler(__class_type_info *param_1)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  __s1 = *(char **)(param_1 + 8);
  uVar2 = 1;
  if ((__s1 != "NSt8ios_base7failureE") && (uVar2 = 0, *__s1 != '*')) {
    iVar1 = strcmp(__s1,"NSt8ios_base7failureE");
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}

