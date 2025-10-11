
void FUN_00789de0(ulong param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (DAT_00945880 != '\0') {
    uVar3 = DAT_00945870 + 1;
    if (uVar3 <= DAT_00945888) {
      uVar5 = *DAT_00945878;
      lVar4 = 0;
      puVar2 = DAT_00945878;
      while( true ) {
        while (uVar3 - lVar4 < uVar5) {
          lVar1 = (uVar3 - lVar4) + 1;
          if (puVar2[lVar1 * 2 + 1] == 0) {
            puVar2[lVar1 * 2 + 1] = param_1;
            goto LAB_00789eaa;
          }
          uVar3 = uVar3 + 1;
          if (DAT_00945888 + 1 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("result <= GL(dl_tls_max_dtv_idx) + 1","../elf/dl-tls.c",0x9c,
                         "_dl_assign_tls_modid");
          }
        }
        puVar2 = (ulong *)puVar2[1];
        lVar4 = lVar4 + uVar5;
        if (puVar2 == (ulong *)0x0) break;
        uVar5 = *puVar2;
      }
LAB_00789eaa:
      if (uVar3 <= DAT_00945888) goto LAB_00789e03;
    }
    if (DAT_00945888 + 1 != uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("result == GL(dl_tls_max_dtv_idx) + 1","../elf/dl-tls.c",0xae,
                   "_dl_assign_tls_modid");
    }
    DAT_00945880 = '\0';
  }
  uVar3 = DAT_00945888 + 1;
  DAT_00945888 = uVar3;
LAB_00789e03:
  *(ulong *)(param_1 + 0x460) = uVar3;
  return;
}

