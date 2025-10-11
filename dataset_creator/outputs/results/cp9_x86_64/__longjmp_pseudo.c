
void __longjmp(__jmp_buf_tag *__env,int __val)

{
  long lVar1;
  ulong uVar2;
  undefined8 in_RCX;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long in_SSP;
  
  UNRECOVERED_JUMPTABLE =
       (code *)(((ulong)__env->__jmpbuf[7] >> 0x11 | __env->__jmpbuf[7] << 0x2f) ^
               *(ulong *)(in_FS_OFFSET + 0x30));
  lVar1 = in_SSP - (__env->__saved_mask).__val[2];
  if (lVar1 != 0) {
    uVar2 = ((ulong)-lVar1 >> 3) + 1;
    uVar3 = 0xff;
    do {
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      bVar4 = uVar3 <= uVar2;
      uVar2 = uVar2 - uVar3;
    } while (bVar4 && uVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x007871a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (__env,__val,UNRECOVERED_JUMPTABLE,in_RCX,
             ((ulong)__env->__jmpbuf[6] >> 0x11 | __env->__jmpbuf[6] << 0x2f) ^
             *(ulong *)(in_FS_OFFSET + 0x30),
             ((ulong)__env->__jmpbuf[1] >> 0x11 | __env->__jmpbuf[1] << 0x2f) ^
             *(ulong *)(in_FS_OFFSET + 0x30));
  return;
}

