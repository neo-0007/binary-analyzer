
int engine_load_padlock_int(void)

{
  uint uVar1;
  int iVar2;
  ENGINE *e;
  char *pcVar3;
  bool bVar4;
  int iStack_18;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return iStack_18;
  }
  uVar1 = padlock_capability();
  pcVar3 = "ACE";
  padlock_use_rng = 0;
  bVar4 = (uVar1 & 0xc0) == 0xc0;
  padlock_use_ace = (uint)bVar4;
  if (!bVar4) {
    pcVar3 = "no-ACE";
  }
  BIO_snprintf(padlock_name,100,"VIA PadLock (%s, %s)","no-RNG",pcVar3);
  iVar2 = ENGINE_set_id(e,"padlock");
  if ((((iVar2 != 0) && (iVar2 = ENGINE_set_name(e,padlock_name), iVar2 != 0)) &&
      (iVar2 = ENGINE_set_init_function(e,padlock_init), iVar2 != 0)) &&
     (((padlock_use_ace == 0 || (iVar2 = ENGINE_set_ciphers(e,padlock_ciphers), iVar2 != 0)) &&
      ((padlock_use_rng == 0 || (iVar2 = ENGINE_set_RAND(e,(RAND_METHOD *)padlock_rand), iVar2 != 0)
       ))))) {
    ERR_set_mark();
    ENGINE_add(e);
    ENGINE_free(e);
    iVar2 = ERR_pop_to_mark();
    return iVar2;
  }
  iVar2 = ENGINE_free(e);
  return iVar2;
}

