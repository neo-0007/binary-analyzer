
void FUN_006e8140(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar3 = FUN_004011e0(param_1,"plural=");
    lVar4 = FUN_004011e0(param_1,"nplurals=");
    if ((lVar3 != 0) && (lVar4 != 0)) {
      lVar6 = lVar4 + 9;
      bVar1 = *(byte *)(lVar4 + 9);
      if (bVar1 != 0) {
        do {
          if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (ulong)bVar1 * 2) & 0x20) == 0) {
            if ((byte)(bVar1 - 0x30) < 10) {
              uVar5 = FUN_006e9510(lVar6,&local_50,10);
              if (local_50 != lVar6) {
                *param_3 = uVar5;
                local_48 = lVar3 + 7;
                iVar2 = FUN_006e78f0(&local_48);
                if (iVar2 == 0) {
                  *param_2 = local_40;
                  goto LAB_006e8233;
                }
              }
            }
            break;
          }
          bVar1 = *(byte *)(lVar6 + 1);
          lVar6 = lVar6 + 1;
        } while (bVar1 != 0);
      }
    }
  }
  *param_2 = &DAT_00919160;
  *param_3 = 2;
LAB_006e8233:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

