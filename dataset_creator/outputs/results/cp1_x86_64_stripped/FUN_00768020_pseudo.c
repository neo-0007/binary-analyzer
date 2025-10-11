
void FUN_00768020(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  FUN_0070b2d0(&DAT_00946120);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_00711600(0x30,1);
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    if (puVar3 == (undefined8 *)0x0) goto LAB_00768051;
    *(code **)(param_1 + 0x20) = FUN_00768700;
  }
  else if (*(int *)(puVar3 + 2) != 0) goto LAB_00768051;
  uVar10 = (ulong)*(uint *)(param_1 + 0x1d0);
  piVar6 = (int *)*puVar3;
  if (uVar10 == 0) {
    if (piVar6 != (int *)0x0) {
      FUN_007104f0();
      *puVar3 = 0;
    }
  }
  else {
    if (uVar10 != puVar3[1]) {
      piVar6 = (int *)FUN_00710840(piVar6,uVar10 * 0x48);
    }
    if (piVar6 == (int *)0x0) {
      FUN_007104f0(*puVar3);
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(param_1 + 0x1d8);
      puVar3[1] = uVar10;
      *puVar3 = piVar6;
      piVar8 = piVar6;
      do {
        uVar1 = puVar9[1];
        *(undefined8 *)piVar8 = *puVar9;
        *(undefined8 *)(piVar8 + 2) = uVar1;
        uVar1 = puVar9[3];
        *(undefined8 *)(piVar8 + 4) = puVar9[2];
        *(undefined8 *)(piVar8 + 6) = uVar1;
        if ((piVar8[2] < piVar8[5]) ||
           ((piVar8[2] == piVar8[5] &&
            ((piVar8[3] < piVar8[6] || ((piVar8[3] == piVar8[6] && (piVar8[4] <= piVar8[7])))))))) {
          iVar2 = (uint)(*piVar8 == 0x2b) * 2 + -1;
        }
        else {
          iVar2 = ((*piVar8 != 0x2b) - 1) + (uint)(*piVar8 != 0x2b);
        }
        piVar8[0x10] = iVar2;
        piVar7 = piVar8 + 0x12;
        *(undefined8 **)(piVar8 + 8) = puVar9 + 4;
        lVar4 = thunk_FUN_007129d0(puVar9 + 4);
        lVar4 = (long)puVar9 + lVar4 + 0x21;
        *(long *)(piVar8 + 10) = lVar4;
        lVar5 = thunk_FUN_007129d0(lVar4);
        lVar5 = lVar4 + 1 + lVar5;
        lVar5 = lVar5 + (ulong)((int)puVar9 - (int)lVar5 & 3);
        *(long *)(piVar8 + 0xc) = lVar5;
        lVar4 = thunk_FUN_007a9080(lVar5,0);
        *(long *)(piVar8 + 0xe) = lVar4 + 4;
        lVar4 = thunk_FUN_007a9080();
        puVar9 = (undefined8 *)(lVar4 + 4);
        piVar8 = piVar7;
      } while (piVar7 != piVar6 + uVar10 * 0x12);
    }
  }
  *(undefined4 *)(puVar3 + 2) = 1;
LAB_00768051:
  FUN_0070b100(&DAT_00946120);
  return;
}

