
void __start_context(void)

{
  long lVar1;
  long *unaff_RBX;
  
  lVar1 = *unaff_RBX;
  if (lVar1 != 0) {
    unaff_RBX[-1] = 0x6eb0c5;
    lVar1 = setcontext();
  }
                    /* WARNING: Subroutine does not return */
  unaff_RBX[-1] = 0x6eb0cd;
  exit((int)lVar1);
}

