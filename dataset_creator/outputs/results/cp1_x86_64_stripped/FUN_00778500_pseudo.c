
undefined8 * FUN_00778500(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  
  puVar3 = *(undefined8 **)(in_FS_OFFSET + -0x10);
  if (puVar3 == (undefined8 *)0x0) {
    uVar10 = *(undefined8 *)(in_FS_OFFSET + -0x70);
    puVar8 = (undefined8 *)FUN_007101b0(0x28);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = uVar10;
      lVar9 = FUN_007af830(uVar10);
      puVar8[2] = 1;
      puVar8[1] = lVar9;
      *(undefined1 *)(puVar8 + 3) = 1;
      puVar8[4] = *(undefined8 *)(in_FS_OFFSET + -0x10);
      *(undefined8 **)(in_FS_OFFSET + -0x10) = puVar8;
      piVar4 = (int *)*puVar8;
      uVar5 = *(ulong *)(piVar4 + 2);
      if ((uVar5 & 1) == 0) {
        if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("ctx->conf == NULL","resolv_context.c",0x6e,"maybe_init");
        }
        iVar7 = FUN_007aee40(piVar4,0);
        if (-1 < iVar7) {
          uVar10 = FUN_007af830(*puVar8);
          puVar8[1] = uVar10;
          return puVar8;
        }
      }
      else {
        if (((((uVar5 & 0x2000000) != 0) || (lVar9 == 0)) || (uVar5 != *(uint *)(lVar9 + 0x38))) ||
           (((*piVar4 != *(int *)(lVar9 + 0x3c) || (piVar4[1] != *(int *)(lVar9 + 0x40))) ||
            ((*(byte *)(piVar4 + 0x62) & 0xf) != *(uint *)(lVar9 + 0x44))))) {
          return puVar8;
        }
        lVar9 = FUN_007af600();
        if (lVar9 != 0) {
          if (lVar9 == puVar8[1]) {
            FUN_007af9e0(lVar9);
            return puVar8;
          }
          if (0 < piVar4[4]) {
            FUN_007ad930(piVar4,1);
          }
          cVar6 = FUN_007afde0(*puVar8,lVar9);
          if (cVar6 == '\0') {
            return puVar8;
          }
          FUN_007af9e0(puVar8[1]);
          puVar8[1] = lVar9;
          return puVar8;
        }
      }
      *(undefined8 *)(in_FS_OFFSET + -0x10) = puVar8[4];
      uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      FUN_007af9e0(puVar8[1]);
      FUN_007104f0(puVar8);
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

