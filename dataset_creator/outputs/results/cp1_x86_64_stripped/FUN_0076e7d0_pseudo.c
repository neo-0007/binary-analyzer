
/* WARNING: Removing unreachable block (ram,0x0076e8bc) */
/* WARNING: Removing unreachable block (ram,0x0076e900) */
/* WARNING: Removing unreachable block (ram,0x0076e90a) */
/* WARNING: Removing unreachable block (ram,0x0076e915) */
/* WARNING: Removing unreachable block (ram,0x0076e92b) */
/* WARNING: Removing unreachable block (ram,0x0076e8c6) */
/* WARNING: Removing unreachable block (ram,0x0076e935) */
/* WARNING: Removing unreachable block (ram,0x0076e942) */
/* WARNING: Removing unreachable block (ram,0x0076e947) */
/* WARNING: Removing unreachable block (ram,0x0076e94f) */
/* WARNING: Removing unreachable block (ram,0x0076e960) */
/* WARNING: Removing unreachable block (ram,0x0076e980) */
/* WARNING: Removing unreachable block (ram,0x0076e899) */

undefined8 FUN_0076e7d0(undefined8 param_1,uint param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ulong local_78;
  ulong uStack_70;
  undefined1 local_68;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined2 local_57;
  undefined1 local_55;
  undefined1 local_48 [40];
  long local_20;
  
  lVar2 = 0x5401;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)local_48;
  syscall();
  if (param_2 < 3) {
    uStack_70 = param_3[1];
    lVar2 = (long)(int)(param_2 + 0x5402);
    local_67 = *(undefined8 *)((long)param_3 + 0x11);
    uStack_5f = *(undefined8 *)((long)param_3 + 0x19);
    local_57 = *(undefined2 *)((long)param_3 + 0x21);
    local_68 = (undefined1)param_3[2];
    local_78 = *param_3 & 0xffffffff7fffffff;
    local_55 = *(undefined1 *)((long)param_3 + 0x23);
    syscall();
    uVar3 = 0x10;
    puVar1 = &local_78;
  }
  else {
    uVar3 = 0xffffffff;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1,lVar2,puVar1);
}

