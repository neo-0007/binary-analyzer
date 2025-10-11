
undefined8 * FUN_00778730(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  
  puVar3 = *(undefined8 **)(in_FS_OFFSET + -0x10);
  if (puVar3 == (undefined8 *)0x0) {
    uVar11 = *(undefined8 *)(in_FS_OFFSET + -0x70);
    puVar9 = (undefined8 *)FUN_007101b0(0x28);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = uVar11;
      lVar10 = FUN_007af830(uVar11);
      puVar9[2] = 1;
      puVar9[1] = lVar10;
      *(undefined1 *)(puVar9 + 3) = 1;
      puVar9[4] = *(undefined8 *)(in_FS_OFFSET + -0x10);
      *(undefined8 **)(in_FS_OFFSET + -0x10) = puVar9;
      piVar4 = (int *)*puVar9;
      uVar5 = *(ulong *)(piVar4 + 2);
      if ((uVar5 & 1) == 0) {
        if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("ctx->conf == NULL","resolv_context.c",0x6e,"maybe_init");
        }
        if (*piVar4 == 0) {
          *piVar4 = 5;
        }
        if (piVar4[1] == 0) {
          piVar4[1] = 2;
        }
        piVar4[2] = 0x2c0;
        piVar4[3] = 0;
        if ((short)piVar4[0x11] == 0) {
          uVar7 = FUN_007aefa0();
          *(undefined2 *)(piVar4 + 0x11) = uVar7;
        }
        iVar8 = FUN_007aee40(piVar4,1);
        if (-1 < iVar8) {
          uVar11 = FUN_007af830(*puVar9);
          puVar9[1] = uVar11;
          return puVar9;
        }
      }
      else {
        if (((((uVar5 & 0x2000000) != 0) || (lVar10 == 0)) || (uVar5 != *(uint *)(lVar10 + 0x38)))
           || (((*piVar4 != *(int *)(lVar10 + 0x3c) || (piVar4[1] != *(int *)(lVar10 + 0x40))) ||
               ((*(byte *)(piVar4 + 0x62) & 0xf) != *(uint *)(lVar10 + 0x44))))) {
          return puVar9;
        }
        lVar10 = FUN_007af600();
        if (lVar10 != 0) {
          if (lVar10 == puVar9[1]) {
            FUN_007af9e0(lVar10);
            return puVar9;
          }
          if (0 < piVar4[4]) {
            FUN_007ad930(piVar4,1);
          }
          cVar6 = FUN_007afde0(*puVar9,lVar10);
          if (cVar6 == '\0') {
            return puVar9;
          }
          FUN_007af9e0(puVar9[1]);
          puVar9[1] = lVar10;
          return puVar9;
        }
      }
      *(undefined8 *)(in_FS_OFFSET + -0x10) = puVar9[4];
      uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      FUN_007af9e0(puVar9[1]);
      FUN_007104f0(puVar9);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
    }
  }
  else {
    if (*(char *)(puVar3 + 3) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("current->__from_res","resolv_context.c",0xa2,"context_reuse");
    }
    plVar1 = puVar3 + 2;
    *plVar1 = *plVar1 + 1;
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("current->__refcount > 0","resolv_context.c",0xa8,"context_reuse");
    }
  }
  return puVar3;
}

