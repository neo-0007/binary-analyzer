
int RAND_pseudo_bytes(uchar *buf,int num)

{
  int iVar1;
  RAND_METHOD *pRVar2;
  
  pRVar2 = RAND_get_rand_method();
  if ((pRVar2 != (RAND_METHOD *)0x0) && (pRVar2->pseudorand != (_func_3916 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042f691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pRVar2->pseudorand)(buf,num);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/rand/rand_lib.c",0x11d,"RAND_pseudo_bytes");
  ERR_set_error(0x24,0x65,0);
  return -1;
}

