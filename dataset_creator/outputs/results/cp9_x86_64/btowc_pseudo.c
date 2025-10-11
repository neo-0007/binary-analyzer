
wint_t btowc(int __c)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long in_FS_OFFSET;
  wint_t local_7c;
  undefined1 *local_78;
  undefined1 local_70 [8];
  wint_t *local_68;
  undefined1 **ppuStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (__c + 0x80U < 0x180) {
    if (__c != -1) {
      if ((__c & 0xffffff80U) != 0) {
        puVar1 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
        ppuVar4 = *(undefined ***)(puVar1 + 0x28);
        if ((ppuVar4 == (undefined **)0x0) &&
           (ppuVar4 = &__wcsmbs_gconv_fcts_c, puVar1 != _nl_C_LC_CTYPE)) {
          __wcsmbs_load_conv(puVar1);
          ppuVar4 = *(undefined ***)(puVar1 + 0x28);
        }
        pcVar3 = *(code **)((long)*ppuVar4 + 0x30);
        if (*(long *)*ppuVar4 != 0) {
          pcVar3 = (code *)(((ulong)pcVar3 >> 0x11 | (long)pcVar3 << 0x2f) ^
                           *(ulong *)(in_FS_OFFSET + 0x30));
        }
        if ((ppuVar4[1] == (undefined *)0x1) && (pcVar3 != (code *)0x0)) {
          _dl_mcount_wrapper_check(pcVar3);
          __c = (*pcVar3)(*ppuVar4,__c & 0xff);
        }
        else {
          local_78 = &local_31;
          local_40 = 0;
          local_58 = DAT_0081efa0;
          local_48 = &local_40;
          local_50 = 1;
          pcVar3 = *(code **)((long)*ppuVar4 + 0x28);
          if (*(long *)*ppuVar4 != 0) {
            pcVar3 = (code *)(((ulong)pcVar3 >> 0x11 | (long)pcVar3 << 0x2f) ^
                             *(ulong *)(in_FS_OFFSET + 0x30));
          }
          local_68 = &local_7c;
          ppuStack_60 = &local_78;
          local_31 = (char)__c;
          _dl_mcount_wrapper_check(pcVar3);
          iVar2 = (*pcVar3)(*ppuVar4,&local_68,&local_78,local_78 + 1,0,local_70,0,1);
          if ((iVar2 - 4U < 2) || (__c = 0xffffffff, iVar2 == 0)) {
            __c = local_7c;
          }
        }
      }
      goto LAB_0074cd40;
    }
  }
  __c = 0xffffffff;
LAB_0074cd40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

