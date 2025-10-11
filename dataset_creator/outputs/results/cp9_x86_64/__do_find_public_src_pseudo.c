
/* __cxxabiv1::__vmi_class_type_info::__do_find_public_src(long, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

uint __thiscall
__cxxabiv1::__vmi_class_type_info::__do_find_public_src
          (__vmi_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  ulong uVar1;
  char *__s1;
  uint uVar2;
  int iVar3;
  long lVar4;
  __vmi_class_type_info *p_Var5;
  ulong uVar6;
  
  if (param_2 == param_4) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar3 = strcmp(__s1,*(char **)(param_3 + 8)), iVar3 == 0)) {
      return 6;
    }
  }
  uVar6 = (ulong)*(uint *)(this + 0x14);
  p_Var5 = this + uVar6 * 0x10;
  do {
    if (uVar6 == 0) {
      return 1;
    }
    uVar1 = *(ulong *)(p_Var5 + 0x10);
    if ((uVar1 & 2) != 0) {
      lVar4 = (long)uVar1 >> 8;
      if ((uVar1 & 1) != 0) {
        if (param_1 == -3) goto LAB_006ad573;
                    /* WARNING: Load size is inaccurate */
        lVar4 = *(long *)(*param_2 + lVar4);
      }
      uVar2 = (**(code **)(**(long **)(p_Var5 + 8) + 0x40))
                        (*(long **)(p_Var5 + 8),param_1,lVar4 + (long)param_2,param_3,param_4);
      if (3 < (int)uVar2) {
        if ((uVar1 & 1) == 0) {
          return uVar2;
        }
        return uVar2 | 1;
      }
    }
LAB_006ad573:
    p_Var5 = p_Var5 + -0x10;
    uVar6 = uVar6 - 1;
  } while( true );
}

