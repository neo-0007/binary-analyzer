
undefined8
FUN_0044db40(long param_1,undefined8 *param_2,long *param_3,ulong param_4,undefined8 *param_5,
            ulong param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  iVar2 = FUN_0043b840();
  if (iVar2 == 0) goto LAB_0044dea0;
  if (param_4 < param_6) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_tdes_wrap.c",0x8b,"tdes_wrap_cipher");
    FUN_0051f8f0(0x39,0x6a,0);
    uVar4 = 0;
    goto LAB_0044dcea;
  }
  if ((param_6 >> 0x3e == 0) && ((param_6 & 7) == 0)) {
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      if (0x17 < param_6) {
        if (param_2 == (undefined8 *)0x0) {
LAB_0044deee:
          iVar2 = (int)param_6 + -0x10;
          goto LAB_0044dca1;
        }
        lVar1 = param_1 + 0x94;
        *(undefined8 *)(param_1 + 0x94) = 0x521e8792ca2dd4a;
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_68,param_5,8);
        if (param_2 == param_5) {
          param_5 = param_2 + -1;
          thunk_FUN_00713610(param_2,param_2 + 1,param_6 - 8);
          puVar6 = param_2;
        }
        else {
          puVar6 = param_5 + 1;
        }
        lVar3 = param_6 - 0x10;
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,puVar6,lVar3);
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))
                  (param_1,local_60,(param_6 - 8) + (long)param_5,8);
        FUN_004c52e0(local_68,0,8);
        FUN_004c52e0(param_2,0,lVar3);
        FUN_004c52e0(lVar1,local_60,8);
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_2,lVar3);
        (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,local_68,local_68,8);
        lVar5 = FUN_0057cd40(param_2,lVar3,local_58);
        if (lVar5 == 0) {
LAB_0044de5a:
          FUN_004227b0(local_68,8);
          FUN_004227b0(local_58,0x14);
          FUN_004227b0(local_60,8);
          FUN_004227b0(lVar1,0x10);
        }
        else {
          iVar2 = FUN_00422820(local_58,local_68,8);
          if (iVar2 != 0) goto LAB_0044de5a;
          FUN_004227b0(local_68,8);
          FUN_004227b0(local_58,0x14);
          FUN_004227b0(local_60,8);
          FUN_004227b0(lVar1,0x10);
          if ((int)param_6 != 0xf) goto LAB_0044deee;
        }
        FUN_004227b0(param_2,lVar3);
      }
    }
    else {
      lVar1 = param_6 + 0x10;
      if (param_2 == (undefined8 *)0x0) {
LAB_0044dc9e:
        iVar2 = (int)lVar1;
LAB_0044dca1:
        if (0 < iVar2) {
          *param_3 = (long)iVar2;
          uVar4 = 1;
          goto LAB_0044dcea;
        }
      }
      else {
        puVar6 = param_2 + 1;
        thunk_FUN_00713610(puVar6,param_5,param_6);
        lVar3 = FUN_0057cd40(param_5,param_6,local_58);
        if (lVar3 != 0) {
          *(undefined8 *)((long)param_2 + param_6 + 8) = local_58[0];
          FUN_004227b0(local_58,0x14);
          iVar2 = FUN_00429580(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x94,8,0);
          if (0 < iVar2) {
            *param_2 = *(undefined8 *)(param_1 + 0x94);
            (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,puVar6,puVar6,param_6 + 8);
            FUN_004c52e0(param_2,0,lVar1);
            *(undefined8 *)(param_1 + 0x94) = 0x521e8792ca2dd4a;
            (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_2,lVar1);
            goto LAB_0044dc9e;
          }
        }
      }
    }
  }
LAB_0044dea0:
  uVar4 = 0;
LAB_0044dcea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

