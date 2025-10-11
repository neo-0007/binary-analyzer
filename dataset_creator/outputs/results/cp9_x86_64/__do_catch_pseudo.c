
/* std::type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined8 std::type_info::__do_catch(type_info *param_1,void **param_2,uint param_3)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  __s1 = *(char **)(param_1 + 8);
  uVar2 = 1;
  if ((__s1 != (char *)param_2[1]) && (uVar2 = 0, *__s1 != '*')) {
    iVar1 = strcmp(__s1,(char *)param_2[1]);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}

