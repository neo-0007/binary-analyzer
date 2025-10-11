
void _dl_tunable_set_hugetlb(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 1) {
    iVar1 = __malloc_thp_mode();
    if (iVar1 == 1) {
      DAT_00931108 = __malloc_default_thp_pagesize();
    }
    return;
  }
  if (1 < uVar2) {
    if (uVar2 == 2) {
      uVar2 = 0;
    }
    __malloc_hugepage_config(uVar2,&DAT_00931110);
    return;
  }
  return;
}

