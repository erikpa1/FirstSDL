# English

- [Short Vowels](#short-vowels)
- [Long Vowels](#long-vowels)
- [Rhotic Vowels](#rhotic-vowels)
- [Reduced Vowels](#reduced-vowels)
- [Diphthongs](#diphthongs)
- [Split Vowels](#split-vowels)
- [References](#references)

----------

The English language support uses a vowel system based on John Wells' Lexical
Sets<sup>\[<a href="#ref1">1</a>\]</sup>. These were created by Wells in 1982
by comparing the Received Pronunciation British (RP) and General American
(GenAm) accents in use at that time.

The `en` transcriptions listed below are the phonemes used by eSpeak NG to
transcribe the different lexical sets.

## Short Vowels

| Lexical Set | en    | RP    | GenAm |
|-------------|-------|-------|-------|
| KIT         | `I`   | ɪ     | ɪ     |
| DRESS       | `E`   | e     | ɛ     |
| TRAP        | `a`   | æ     | æ     |
| LOT         | `0`   | ɒ     | ɑ     |
| STRUT       | `V`   | ʌ     | ʌ     |
| FOOT        | `U`   | ʊ     | ʊ     |

## Long Vowels

| Lexical Set | en    | RP    | GenAm |
|-------------|-------|-------|-------|
| FLEECE      | `i:`  | iː    | i     |
| PALM        | `A:`  | ɑː    | ɑ     |
| THOUGHT     | `O:`  | ɔː    | ɔ     |
| GOOSE       | `u:`  | uː    | u     |

## Rhotic Vowels

These are vowels that are followed by an `r` that is not part of the next syllable
when considering the root form of the word containing that vowel.

| Lexical Set | en    | RP    | GenAm |
|-------------|-------|-------|-------|
| NURSE       | `3:`  | ɜː    | ɝ     |
| START       | `A@`  | ɑː    | ɑɹ    |
| NORTH       | `O@`  | ɔː    | ɔɹ    |
| FORCE       | `o@`  | ɔː    | oɹ    |
| CURE        | `U@`  | ʊə̯     | ʊɹ    |
| NEAR        | `i@3` | ɪə̯     | ɪɹ    |
| SQUARE      | `e@`  | eə̯     | ɛɹ    |

__NOTE:__ `/i@3/` is used for the NEAR lexical set to differentiate it from
`/i@/` used in words like `million`.

## Reduced Vowels

These are unstressed vowels that differ from the vowels in the main lexical sets.

| Lexical Set | en    | RP    | GenAm |
|-------------|-------|-------|-------|
| HAPPY       | `i`   | ɪ     | i     |
| COMMA       | `@`   | ə     | ə     |
| LETTER      | `3`   | ə     | ɚ     |

Additionally, espeak-ng has the following phonemes for unstressed vowels.

| Lexical Set | en    |
|-------------|-------|
| EXPLORE     | `e#`  |
| ROSES       | `I#`  |
| RABBIT      | `I2`  |

The EXPLORE lexical set is used to support unstressed KIT vowels that have split
from the KIT vowel and merged with the DRESS vowel in some accents. This includes
`ex-` words.

The ROSES lexical set is used for words that are KIT in some accents and COMMA
in others. The degree to which this occurs varies between accents and speakers.

The RABBIT lexical set is used for unstressed KIT vowels. Some American accents
have merged this with the COMMA lexical set, such that `rabbit` and `abbot`
rhyme.

## Diphthongs

| Lexical Set | en    | RP    | GenAm |
|-------------|-------|-------|-------|
| FACE        | `eI`  | eɪ̯     | eɪ̯     |
| PRICE       | `aI`  | aɪ̯     | aɪ̯     |
| CHOICE      | `OI`  | ɔɪ̯     | ɔɪ̯     |
| GOAT        | `oU`  | əʊ̯     | oʊ̯     |
| MOUTH       | `aU`  | aʊ̯     | aʊ̯     |

## Split Vowels

These are lexical sets defined by John Wells that are merged with other lexical
sets in both RP and GenAm, so have split from one of those lexical sets and
merged with the other.

| Lexical Set | en    | RP    | GenAm |
|-------------|-------|-------|-------|
| BATH        | `aa`  | ɑː    | æ     |
| CLOTH       | `O2`  | ɒ     | ɔ     |

## References

1. <a name="ref1"></a> Wikipedia.
   [Lexical set](https://en.wikipedia.org/wiki/Lexical_set). 2017.
   Creative Commons Attribution-Sharealike 3.0 Unported License (CC-BY-SA).
