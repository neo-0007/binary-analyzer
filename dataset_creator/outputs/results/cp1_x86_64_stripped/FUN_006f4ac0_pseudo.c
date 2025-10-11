
void FUN_006f4ac0(void)

{
  long lVar1;
  long *unaff_RBX;
  
  lVar1 = *unaff_RBX;
  if (lVar1 != 0) {
    unaff_RBX[-1] = 0x6f4ad5;
    lVar1 = FUN_00791e80();
  }
  unaff_RBX[-1] = 0x6f4add;
  FUN_006e91a0(lVar1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

