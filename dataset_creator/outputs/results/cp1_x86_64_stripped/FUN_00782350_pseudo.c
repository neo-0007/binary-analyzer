
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00782350(undefined4 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined1 auStack_e8 [8];
  long local_e0;
  long local_d8;
  long local_d0;
  int local_c0;
  undefined2 local_bc;
  undefined2 local_b8;
  undefined8 local_b6;
  undefined8 uStack_ae;
  undefined4 local_a6;
  undefined1 local_a2;
  long local_40;
  undefined1 *puVar9;
  
  puVar9 = auStack_e8;
  puVar8 = auStack_e8;
  puVar10 = auStack_e8;
  local_e0 = CONCAT44(local_e0._4_4_,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = FUN_00771200(1,0x80801,0);
  if (iVar4 < 0) {
    iVar4 = -1;
  }
  else {
    lVar1 = param_3 + 0xc;
    puVar10 = auStack_e8;
    while (puVar9 != auStack_e8 + -(param_3 + 0x23U & 0xfffffffffffff000)) {
      puVar8 = puVar10 + -0x1000;
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      puVar9 = puVar10 + -0x1000;
      puVar10 = puVar10 + -0x1000;
    }
    uVar7 = (ulong)((uint)(param_3 + 0x23U) & 0xff0);
    lVar2 = -uVar7;
    puVar10 = puVar8 + lVar2;
    if (uVar7 != 0) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    puVar11 = (undefined4 *)((ulong)(puVar8 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_b8 = 1;
    local_a6 = 0x74656b63;
    local_a2 = 0;
    local_b6 = _DAT_0082ec90;
    uStack_ae = _UNK_0082ec98;
    *(undefined8 *)(puVar8 + lVar2 + -8) = 0x782430;
    iVar5 = FUN_00770f00(iVar4,&local_b8,0x6e);
    if ((-1 < iVar5) || (*(int *)(in_FS_OFFSET + -0x58) == 0x73)) {
      puVar11[2] = (int)param_3;
      *puVar11 = 2;
      lVar12 = 0;
      bVar3 = true;
      puVar11[1] = (undefined4)local_e0;
      *(undefined8 *)(puVar8 + lVar2 + -8) = 0x782473;
      thunk_FUN_00713a50(puVar11 + 3,param_2,param_3);
      local_e0 = 0;
      while( true ) {
        *(undefined8 *)(puVar8 + lVar2 + -8) = 0x782491;
        lVar6 = FUN_007abe80(iVar4,puVar11,lVar1,0x4000);
        if (lVar6 != -1) break;
        if (*(int *)(in_FS_OFFSET + -0x58) != 4) {
          if (lVar1 == -1) goto LAB_007824a0;
          if (*(int *)(in_FS_OFFSET + -0x58) != 0xb) goto LAB_007825c8;
          *(undefined8 *)(puVar8 + lVar2 + -8) = 0x7824f4;
          FUN_00767f90(0,&local_d8);
          lVar6 = local_d0;
          local_c0 = iVar4;
          if (bVar3) {
            local_bc = 0x1c;
            local_e0 = local_d8 + 5;
            *(undefined8 *)(puVar8 + lVar2 + -8) = 0x78253b;
            iVar5 = FUN_0076e410(&local_c0,1,5000);
            lVar12 = lVar6;
          }
          else {
            local_bc = 0x1c;
            *(undefined8 *)(puVar8 + lVar2 + -8) = 0x7825bc;
            iVar5 = FUN_0076e410(&local_c0,1,
                                 (int)((lVar12 - local_d0) / 1000000) +
                                 ((int)local_e0 - (int)local_d8) * 1000);
          }
          if (iVar5 < 1) goto LAB_007825c8;
          bVar3 = false;
        }
      }
      puVar10 = puVar8 + lVar2;
      if (lVar1 == lVar6) goto LAB_007824a0;
    }
LAB_007825c8:
    *(undefined8 *)(puVar8 + lVar2 + -8) = 0x7825d6;
    FUN_0076e4b0(iVar4);
    puVar10 = puVar8 + lVar2;
    iVar4 = -1;
  }
LAB_007824a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar10 + -8) = FUN_007825f0;
    FUN_00771f60();
  }
  return iVar4;
}

