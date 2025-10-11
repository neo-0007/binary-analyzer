
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0078a050(long param_1,char param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *local_58;
  ulong local_40;
  
  if (param_1 != 0) {
    local_58 = *(ulong **)(param_1 + 8);
    FUN_0070a340(&DAT_0093ea60);
    uVar9 = DAT_00945888;
    if (local_58[-2] < DAT_00945888) {
      local_58 = (ulong *)FUN_00789c90(local_58);
      uVar9 = DAT_00945888;
      *(ulong **)(param_1 + 8) = local_58;
    }
    local_40 = 0;
    uVar11 = 0;
    puVar12 = DAT_00945878;
    while( true ) {
      uVar10 = *puVar12;
      uVar8 = (ulong)(local_40 == 0);
      if (uVar8 < uVar10) {
        uVar13 = local_40 + uVar8;
        do {
          uVar4 = _UNK_00829468;
          if (uVar9 < uVar13) goto LAB_0078a1c0;
          uVar1 = puVar12[uVar8 * 2 + 3];
          if (uVar1 != 0) {
            uVar9 = puVar12[uVar8 * 2 + 2];
            if (DAT_00945840 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("listp->slotinfo[cnt].gen <= GL(dl_tls_generation)","../elf/dl-tls.c",
                           0x23f,"_dl_allocate_tls_init");
            }
            uVar2 = *(ulong *)(uVar1 + 0x460);
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            uVar3 = *(ulong *)(uVar1 + 0x458);
            puVar7 = local_58 + uVar2 * 2;
            *puVar7 = _DAT_00829460;
            puVar7[1] = uVar4;
            uVar9 = DAT_00945888;
            if (1 < uVar3 + 1) {
              if (uVar2 != uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_006e2220("map->l_tls_modid == total + cnt","../elf/dl-tls.c",0x249,
                             "_dl_allocate_tls_init");
              }
              uVar4 = *(ulong *)(uVar1 + 0x440);
              uVar2 = *(ulong *)(uVar1 + 0x438);
              if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_006e2220("map->l_tls_blocksize >= map->l_tls_initimage_size","../elf/dl-tls.c",
                             0x24a,"_dl_allocate_tls_init");
              }
              if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_006e2220("(size_t) map->l_tls_offset >= map->l_tls_blocksize","../elf/dl-tls.c",
                             0x24c,"_dl_allocate_tls_init");
              }
              lVar5 = *(long *)(uVar1 + 0x30);
              *puVar7 = param_1 - uVar3;
              if ((lVar5 == 0) || (uVar9 = DAT_00945888, param_2 != '\0')) {
                uVar6 = thunk_FUN_00713820(param_1 - uVar3,*(undefined8 *)(uVar1 + 0x430),uVar2);
                thunk_FUN_00713720(uVar6,0,uVar4 - uVar2);
                uVar10 = *puVar12;
                uVar9 = DAT_00945888;
              }
            }
          }
          uVar8 = uVar8 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar8 < uVar10);
      }
      local_40 = local_40 + uVar8;
      if (uVar9 < local_40) break;
      puVar12 = (ulong *)puVar12[1];
      if (puVar12 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("listp != NULL","../elf/dl-tls.c",0x26a,"_dl_allocate_tls_init");
      }
    }
LAB_0078a1c0:
    FUN_0070abb0(&DAT_0093ea60);
    *local_58 = uVar11;
  }
  return param_1;
}

