
int wctob(wint_t __c)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  wint_t *local_78;
  wint_t local_6c;
  byte *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  byte local_38;
  byte local_37 [15];
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (__c != 0xffffffff) {
    if (__c < 0x80) goto LAB_0074ce96;
    local_50 = 1;
    local_40 = 0;
    local_58 = DAT_0081efa0;
    local_48 = &local_40;
    puVar1 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
    ppuVar4 = *(undefined ***)(puVar1 + 0x28);
    local_68 = &local_38;
    puStack_60 = local_28;
    if ((ppuVar4 == (undefined **)0x0) &&
       (ppuVar4 = &__wcsmbs_gconv_fcts_c, puVar1 != _nl_C_LC_CTYPE)) {
      __wcsmbs_load_conv(puVar1);
      ppuVar4 = *(undefined ***)(puVar1 + 0x28);
    }
    local_78 = &local_6c;
    pcVar3 = *(code **)((long)ppuVar4[2] + 0x28);
    if (*(long *)ppuVar4[2] != 0) {
      pcVar3 = (code *)(((ulong)pcVar3 >> 0x11 | (long)pcVar3 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
    }
    local_6c = __c;
    _dl_mcount_wrapper_check(pcVar3);
    iVar2 = (*pcVar3)(ppuVar4[2],&local_68,&local_78,local_78 + 1,0,local_80,0,1);
    if (((iVar2 - 4U < 2) || (iVar2 == 0)) && (local_68 == local_37)) {
      __c = (wint_t)local_38;
      goto LAB_0074ce96;
    }
  }
  __c = 0xffffffff;
LAB_0074ce96:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

