int main (int argc, char *argv[])     //calculate and return the RMS of the incoming signal
{
  if(time_weighting == 0) {           //if time weighting is FAST (0)
    
    int i = 0;
    int sample_length = fs / 8

    float s_sq = {};
    float s_sum = 0;
    float s_rms = 0;
        
    for(i = 0; i < sample_length; i++) {
      
      s_sq[i] = s[i] * s[i];
      s_sum += s_sq[i];
    }
        
    s_rms = sqrt(s_sum / sample_length);

    printf("%f\n", s_rms); 

  } else {                            //if time weighting is SLOW (1)
  
    return 0;
    
  }

  return s_rms;

}
