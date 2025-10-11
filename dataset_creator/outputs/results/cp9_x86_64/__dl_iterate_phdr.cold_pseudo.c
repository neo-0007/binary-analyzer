
void __dl_iterate_phdr_cold(void)

{
  pthread_mutex_t *unaff_R15;
  
  pthread_mutex_unlock(unaff_R15);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

