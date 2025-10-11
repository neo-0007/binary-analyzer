
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00776740(char *param_1,uint *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  char *local_50;
  undefined1 local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
  local_44 = (undefined1  [4])0x0;
  if ((int)*param_1 - 0x30U < 10) {
    puVar6 = (undefined4 *)local_44;
    while (uVar4 = FUN_006e9510(param_1,&local_50,0), uVar4 < 0x100000000) {
      cVar1 = *local_50;
      if (cVar1 != '.') {
        if ((((cVar1 == '\0') ||
             ((-1 < cVar1 &&
              ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2) & 0x20) != 0)))) &&
            (local_50 != param_1)) &&
           (uVar3 = (uint)uVar4, uVar3 <= (uint)(&DAT_0082dfe0)[(long)puVar6 - (long)local_44])) {
          if (param_2 != (uint *)0x0) {
            *param_2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18 | (uint)local_44;
          }
          *param_3 = local_50;
          uVar5 = 1;
          goto LAB_007767fa;
        }
        break;
      }
      if ((0xff < uVar4) || ((undefined4 *)((long)local_44 + 2) < puVar6)) break;
      *(char *)puVar6 = (char)uVar4;
      puVar6 = (undefined4 *)((long)puVar6 + 1);
      param_1 = local_50 + 1;
      if (9 < (int)local_50[1] - 0x30U) break;
    }
  }
  uVar5 = 0;
LAB_007767fa:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar2;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

