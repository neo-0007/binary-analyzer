
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0078a2e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long local_40;
  
  if (param_1 == 0) {
    local_40 = FUN_00789f80();
    if (local_40 == 0) {
      return 0;
    }
    puVar8 = *(ulong **)(local_40 + 8);
  }
  else {
    lVar1 = DAT_00945888 + 0xe;
    plVar5 = (long *)FUN_00711600(DAT_00945888 + 0x10,0x10);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    puVar8 = (ulong *)(plVar5 + 2);
    *plVar5 = lVar1;
    *(ulong **)(param_1 + 8) = puVar8;
    local_40 = param_1;
  }
  FUN_0070a340(&DAT_0093ea60);
  uVar11 = DAT_00945888;
  if (puVar8[-2] < DAT_00945888) {
    puVar8 = (ulong *)FUN_00789c90(puVar8);
    uVar11 = DAT_00945888;
    *(ulong **)(local_40 + 8) = puVar8;
  }
  uVar9 = 0;
  uVar10 = 0;
  puVar14 = DAT_00945878;
  uVar16 = _DAT_00829460;
  uVar17 = _UNK_00829468;
  do {
    uVar12 = *puVar14;
    uVar13 = (ulong)(uVar10 == 0);
    if (uVar13 < uVar12) {
      uVar15 = uVar10 + uVar13;
      do {
        while( true ) {
          if (uVar11 < uVar15) goto LAB_0078a4c0;
          uVar2 = puVar14[uVar13 * 2 + 3];
          if (uVar2 != 0) break;
LAB_0078a406:
          uVar13 = uVar13 + 1;
          uVar15 = uVar15 + 1;
          if (uVar12 <= uVar13) goto LAB_0078a483;
        }
        uVar11 = puVar14[uVar13 * 2 + 2];
        if (DAT_00945840 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("listp->slotinfo[cnt].gen <= GL(dl_tls_generation)","../elf/dl-tls.c",0x23f,
                       "_dl_allocate_tls_init");
        }
        uVar3 = *(ulong *)(uVar2 + 0x460);
        uVar4 = *(ulong *)(uVar2 + 0x458);
        if (uVar9 < uVar11) {
          uVar9 = uVar11;
        }
        puVar7 = puVar8 + uVar3 * 2;
        *puVar7 = uVar16;
        puVar7[1] = uVar17;
        if (1 < uVar4 + 1) {
          if (uVar3 != uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("map->l_tls_modid == total + cnt","../elf/dl-tls.c",0x249,
                         "_dl_allocate_tls_init");
          }
          uVar11 = *(ulong *)(uVar2 + 0x440);
          uVar16 = *(ulong *)(uVar2 + 0x438);
          if (uVar11 < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("map->l_tls_blocksize >= map->l_tls_initimage_size","../elf/dl-tls.c",0x24a
                         ,"_dl_allocate_tls_init");
          }
          if (uVar4 < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("(size_t) map->l_tls_offset >= map->l_tls_blocksize","../elf/dl-tls.c",
                         0x24c,"_dl_allocate_tls_init");
          }
          uVar6 = *(undefined8 *)(uVar2 + 0x430);
          *puVar7 = local_40 - uVar4;
          uVar6 = thunk_FUN_00713820(local_40 - uVar4,uVar6,uVar16);
          thunk_FUN_00713720(uVar6,0,uVar11 - uVar16);
          uVar12 = *puVar14;
          uVar11 = DAT_00945888;
          uVar16 = _DAT_00829460;
          uVar17 = _UNK_00829468;
          goto LAB_0078a406;
        }
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + 1;
        uVar11 = DAT_00945888;
      } while (uVar13 < uVar12);
    }
LAB_0078a483:
    uVar10 = uVar10 + uVar13;
    if (uVar11 < uVar10) {
LAB_0078a4c0:
      FUN_0070abb0(&DAT_0093ea60);
      *puVar8 = uVar9;
      return local_40;
    }
    puVar14 = (ulong *)puVar14[1];
    if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("listp != NULL","../elf/dl-tls.c",0x26a,"_dl_allocate_tls_init");
    }
  } while( true );
}

