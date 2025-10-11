
void FUN_006260f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00625ba0(param_3);
  if ((uVar1 <= *(long *)(param_2 + 0x10) - 1U) &&
     (*(long *)(*(long *)(param_2 + 8) + uVar1 * 8) != 0)) {
    FUN_00625c00(param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403a6e("locale::_Impl::_M_replace_facet");
}

