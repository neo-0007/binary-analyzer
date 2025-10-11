
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00548de0(undefined8 *param_1,long param_2,byte *param_3,undefined8 param_4,ulong param_5,
            uint *param_6)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  int iVar10;
  long in_FS_OFFSET;
  long local_50 [4];
  
  local_50[2] = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = 0;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    uVar5 = 0;
    goto LAB_00548f52;
  }
  iVar10 = *param_3 - 0x68;
  if ((iVar10 == 0) && (iVar10 = param_3[1] - 0x65, iVar10 == 0)) {
    iVar10 = param_3[2] - 0x78;
    if (iVar10 == 0) {
      param_3 = param_3 + 3;
    }
  }
  puVar4 = (undefined8 *)thunk_FUN_0041cdd0(param_2,param_3);
  if (param_6 != (uint *)0x0) {
    *param_6 = (uint)(puVar4 != (undefined8 *)0x0);
  }
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(puVar4 + 1);
    if (uVar3 == 4) {
      if (iVar10 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/params_from_text.c",0x72,"prepare_from_text");
        FUN_0051f8f0(0xf,0x80106,0);
        goto LAB_00548f40;
      }
      lVar6 = thunk_FUN_007129d0(param_4);
      param_5 = lVar6 + 1;
LAB_00549085:
      pbVar7 = (byte *)FUN_0041aec0(param_5,"../crypto/params_from_text.c",0xd8);
      if (pbVar7 != (byte *)0x0) {
LAB_005490b5:
        lVar6 = local_50[0];
        uVar3 = *(uint *)(puVar4 + 1);
        if (uVar3 == 4) {
          thunk_FUN_00712b50(pbVar7,param_4,param_5);
          param_5 = param_5 - 1;
        }
        else if (uVar3 < 5) {
          if (((uVar3 - 1 < 2) &&
              (thunk_FUN_004b87e0(local_50[0],pbVar7,param_5 & 0xffffffff),
              *(int *)(puVar4 + 1) == 1)) && (iVar10 = FUN_004b7d60(lVar6), iVar10 != 0)) {
            pbVar8 = pbVar7;
            do {
              *pbVar8 = ~*pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (pbVar8 != pbVar7 + param_5);
          }
        }
        else if (uVar3 == 5) {
          if (iVar10 == 0) {
            local_50[1] = 0;
            iVar10 = FUN_0041c6f0(pbVar7,param_5,local_50 + 1,param_4,0x3a);
            if (iVar10 == 0) {
              FUN_004b7fa0(local_50[0]);
              FUN_0041ad60(pbVar7,"../crypto/params_from_text.c",0xe1);
              uVar5 = 0;
              goto LAB_00548f52;
            }
          }
          else {
            thunk_FUN_00713a50(pbVar7,param_4,param_5);
          }
        }
        goto LAB_00549044;
      }
    }
    else {
      if (uVar3 < 5) {
        if (uVar3 - 1 < 2) {
          if (iVar10 == 0) {
            iVar2 = FUN_004b2590(local_50,param_4);
          }
          else {
            iVar2 = FUN_004b29e0();
          }
          if ((iVar2 != 0) && (local_50[0] != 0)) {
            iVar2 = *(int *)(puVar4 + 1);
            if (iVar2 == 2) {
              iVar2 = FUN_004b7d60();
              if (iVar2 != 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/params_from_text.c",0x3e,"prepare_from_text");
                FUN_0051f8f0(0xf,0x7a,0);
                goto LAB_00548f40;
              }
              iVar2 = *(int *)(puVar4 + 1);
            }
            if (((iVar2 != 1) || (iVar2 = FUN_004b7d60(local_50[0]), iVar2 == 0)) ||
               (iVar2 = FUN_004bcc70(local_50[0],1), iVar2 != 0)) {
              uVar3 = FUN_004b7bb0(local_50[0]);
              uVar9 = (ulong)(int)uVar3;
              if ((*(int *)(puVar4 + 1) == 1) && ((uVar3 & 7) == 0)) {
                uVar9 = uVar9 + 8;
              }
              param_5 = puVar4[3];
              if (param_5 == 0) {
                param_5 = uVar9 + 7 >> 3;
                goto LAB_00548f94;
              }
              if (uVar9 <= param_5 * 8) goto LAB_00549085;
              FUN_0051f420();
              FUN_0051f540("../crypto/params_from_text.c",0x68,"prepare_from_text");
              FUN_0051f8f0(0xf,0x74,0);
            }
          }
          goto LAB_00548f40;
        }
      }
      else if (uVar3 == 5) {
        if (iVar10 == 0) {
          param_5 = thunk_FUN_007129d0(param_4);
          param_5 = param_5 >> 1;
        }
LAB_00548f94:
        uVar9 = 1;
        if (param_5 != 0) {
          uVar9 = param_5;
        }
        pbVar7 = (byte *)FUN_0041aec0(uVar9,"../crypto/params_from_text.c",0xd8);
        if (pbVar7 != (byte *)0x0) {
          if (param_5 != 0) goto LAB_005490b5;
          goto LAB_00549044;
        }
        goto LAB_005491d8;
      }
      pbVar7 = (byte *)FUN_0041aec0(1,"../crypto/params_from_text.c",0xd8);
      if (pbVar7 != (byte *)0x0) {
        param_5 = 0;
LAB_00549044:
        uVar5 = *puVar4;
        uVar1 = puVar4[1];
        param_1[2] = pbVar7;
        param_1[3] = param_5;
        param_1[4] = 0xffffffffffffffff;
        *param_1 = uVar5;
        param_1[1] = uVar1;
        FUN_004b7fa0(local_50[0]);
        uVar5 = 1;
        goto LAB_00548f52;
      }
    }
LAB_005491d8:
    FUN_0051f420();
    FUN_0051f540("../crypto/params_from_text.c",0xd9,"OSSL_PARAM_allocate_from_text");
    FUN_0051f8f0(0xf,0xc0100,0);
  }
LAB_00548f40:
  FUN_004b7fa0(local_50[0]);
  uVar5 = 0;
LAB_00548f52:
  if (local_50[2] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

