
ulong FUN_0044b860(long param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = 0;
  if (0xf < param_4) {
    pcVar1 = *(code **)(*(long *)(param_1 + 0xa8) + 8);
    if (param_4 == 0x10) {
      iVar2 = (*pcVar1)(param_1,param_3,param_2,0x10);
      uVar7 = (ulong)(iVar2 != 0) << 4;
    }
    else {
      uVar7 = (ulong)((uint)param_4 & 0xf);
      if ((param_4 & 0xf) == 0) {
        uVar7 = 0x10;
      }
      lVar8 = param_4 - uVar7;
      iVar2 = (*pcVar1)(param_1,param_3,param_2,lVar8);
      if (iVar2 != 0) {
        puVar6 = (undefined8 *)(param_3 + lVar8);
        local_58 = (undefined1  [16])0x0;
        uVar4 = FUN_00771fb0(local_58,param_2 + lVar8,uVar7,0x10);
        uVar3 = (uint)uVar7;
        if (uVar3 < 8) {
          if ((uVar7 & 4) == 0) {
            if ((uVar3 != 0) &&
               (*(undefined1 *)puVar6 = *(undefined1 *)(puVar6 + -2), (uVar7 & 2) != 0)) {
              *(undefined2 *)((long)puVar6 + (uVar7 - 2)) =
                   *(undefined2 *)((long)puVar6 + (uVar7 - 0x12));
            }
          }
          else {
            *(undefined4 *)puVar6 = *(undefined4 *)(puVar6 + -2);
            *(undefined4 *)((long)puVar6 + (uVar7 - 4)) =
                 *(undefined4 *)((long)puVar6 + (uVar7 - 0x14));
          }
        }
        else {
          *puVar6 = puVar6[-2];
          *(undefined8 *)((long)puVar6 + (uVar7 - 8)) =
               *(undefined8 *)((long)puVar6 + (uVar7 - 0x18));
          lVar8 = (long)puVar6 - ((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
          uVar3 = uVar3 + (int)lVar8 & 0xfffffff8;
          if (7 < uVar3) {
            uVar7 = 0;
            do {
              uVar5 = (int)uVar7 + 8;
              *(undefined8 *)(((ulong)(puVar6 + 1) & 0xfffffffffffffff8) + uVar7) =
                   *(undefined8 *)((long)(puVar6 + -2) + (uVar7 - lVar8));
              uVar7 = (ulong)uVar5;
            } while (uVar5 < uVar3);
          }
        }
        iVar2 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,puVar6 + -2,uVar4,0x10);
        uVar7 = param_4;
        if (iVar2 != 0) goto LAB_0044b8cc;
      }
      uVar7 = 0;
    }
  }
LAB_0044b8cc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

