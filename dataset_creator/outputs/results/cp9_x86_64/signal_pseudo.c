
__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  long in_FS_OFFSET;
  
  if (((__sig - 1U < 0x40) && (__handler != (__sighandler_t)0xffffffffffffffff)) &&
     (1 < __sig - 0x20U)) {
    p_Var1 = (__sighandler_t)__bsd_signal_part_0();
    return p_Var1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return (__sighandler_t)0xffffffffffffffff;
}

