
undefined8
FUN_0051e4a0(int param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,long *param_5,
            undefined4 *param_6)

{
  byte *pbVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar3 = FUN_0051e1a0();
  if (lVar3 != 0) {
    iVar4 = *(int *)(lVar3 + 900);
    iVar6 = *(int *)(lVar3 + 0x380);
    if (iVar6 != iVar4) {
      do {
        lVar7 = (long)iVar6;
        pbVar1 = (byte *)(lVar3 + lVar7 * 4);
        if ((*pbVar1 & 2) == 0) {
          iVar4 = (iVar4 + 1) % 0x10;
          lVar9 = (long)iVar4;
          lVar8 = (long)iVar4;
          pbVar1 = (byte *)(lVar3 + lVar9 * 4);
          if ((*pbVar1 & 2) == 0) {
            if (param_1 == 2) {
              uVar10 = *(undefined8 *)(lVar3 + 0x80 + lVar7 * 8);
              lVar8 = (long)iVar6;
            }
            else {
              uVar10 = *(undefined8 *)(lVar3 + (lVar9 + 0x10) * 8);
              if (param_1 == 0) {
                *(int *)(lVar3 + 900) = iVar4;
                *(undefined8 *)(lVar3 + (lVar9 + 0x10) * 8) = 0;
              }
            }
            iVar6 = (int)lVar8;
            if (param_2 != (undefined8 *)0x0) {
              puVar2 = *(undefined1 **)(lVar3 + 0x240 + (long)iVar6 * 8);
              puVar5 = &DAT_0083e5c2;
              if (puVar2 != (undefined1 *)0x0) {
                puVar5 = puVar2;
              }
              *param_2 = puVar5;
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = *(undefined4 *)(lVar3 + 0x2c0 + (long)iVar6 * 4);
            }
            if (param_4 != (undefined8 *)0x0) {
              puVar2 = *(undefined1 **)(lVar3 + 0x300 + (long)iVar6 * 8);
              puVar5 = &DAT_0083e5c2;
              if (puVar2 != (undefined1 *)0x0) {
                puVar5 = puVar2;
              }
              *param_4 = puVar5;
            }
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = *(undefined4 *)(lVar3 + 0x200 + (long)iVar6 * 4);
            }
            if (param_5 == (long *)0x0) {
              if (param_1 != 0) {
                return uVar10;
              }
              if ((*(byte *)(lVar3 + 0x200 + lVar8 * 4) & 1) != 0) {
                puVar2 = *(undefined1 **)(lVar3 + 0x100 + lVar8 * 8);
                if (puVar2 == (undefined1 *)0x0) {
                  return uVar10;
                }
                *puVar2 = 0;
                *(undefined4 *)(lVar3 + (lVar8 + 0x80) * 4) = 1;
                return uVar10;
              }
              *(undefined8 *)(lVar3 + 0x100 + lVar8 * 8) = 0;
              *(undefined8 *)(lVar3 + 0x180 + lVar8 * 8) = 0;
              *(undefined4 *)(lVar3 + (lVar8 + 0x80) * 4) = 0;
              return uVar10;
            }
            lVar3 = *(long *)(lVar3 + 0x100 + lVar8 * 8);
            if (lVar3 != 0) {
              *param_5 = lVar3;
              return uVar10;
            }
            *param_5 = (long)&DAT_0083e5c2;
            if (param_6 == (undefined4 *)0x0) {
              return uVar10;
            }
            *param_6 = 0;
            return uVar10;
          }
          *(int *)(lVar3 + 900) = iVar4;
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x100 + lVar9 * 8) = 0;
            *(undefined8 *)(lVar3 + 0x180 + lVar9 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar3 + 0x100 + lVar9 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar3 + lVar9 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          FUN_0041ad60(*(undefined8 *)(lVar7 + 0x240),"../crypto/err/err_local.h",0x56);
          *(undefined8 *)(lVar7 + 0x240) = 0;
          FUN_0041ad60(*(undefined8 *)(lVar7 + 0x300),"../crypto/err/err_local.h",0x58);
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar6 = *(int *)(lVar3 + 0x380);
        }
        else {
          if ((pbVar1[0x200] & 1) == 0) {
            *(undefined8 *)(lVar3 + 0x100 + lVar7 * 8) = 0;
            *(undefined8 *)(lVar3 + 0x180 + lVar7 * 8) = 0;
            pbVar1[0x200] = 0;
            pbVar1[0x201] = 0;
            pbVar1[0x202] = 0;
            pbVar1[0x203] = 0;
          }
          else {
            puVar2 = *(undefined1 **)(lVar3 + 0x100 + lVar7 * 8);
            if (puVar2 != (undefined1 *)0x0) {
              *puVar2 = 0;
              pbVar1[0x200] = 1;
              pbVar1[0x201] = 0;
              pbVar1[0x202] = 0;
              pbVar1[0x203] = 0;
            }
          }
          lVar7 = lVar3 + lVar7 * 8;
          pbVar1[0x40] = 0;
          pbVar1[0x41] = 0;
          pbVar1[0x42] = 0;
          pbVar1[0x43] = 0;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          pbVar1[0x2c0] = 0xff;
          pbVar1[0x2c1] = 0xff;
          pbVar1[0x2c2] = 0xff;
          pbVar1[0x2c3] = 0xff;
          FUN_0041ad60(*(undefined8 *)(lVar7 + 0x240),"../crypto/err/err_local.h",0x56);
          *(undefined8 *)(lVar7 + 0x240) = 0;
          FUN_0041ad60(*(undefined8 *)(lVar7 + 0x300),"../crypto/err/err_local.h",0x58);
          *(undefined8 *)(lVar7 + 0x300) = 0;
          iVar6 = *(int *)(lVar3 + 0x380) + -1;
          if (*(int *)(lVar3 + 0x380) < 1) {
            iVar6 = 0xf;
          }
          *(int *)(lVar3 + 0x380) = iVar6;
        }
        iVar4 = *(int *)(lVar3 + 900);
      } while (iVar4 != iVar6);
    }
  }
  return 0;
}

