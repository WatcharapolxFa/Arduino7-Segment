import React, {useState} from 'react'
import ReactCardFlip from 'react-card-flip'

import './style.css'

function CardFlip({img, linkto, content}) {

    const [isFlipped, setIsFlipped] = useState(false)

    const handleClick = (e) => {
        e.preventDefault()

        setIsFlipped(!isFlipped)
    }

    return (
        <div className="row_card_flip">
            <ReactCardFlip isFlipped={isFlipped} flipDirection="horizontal">
                <div className="card-content-img" onClick={handleClick}>
                    <img src={img} alt="" />
                </div>
                
                <div className="card-content-img" onClick={handleClick}>
                    <img src={img} alt="" />
                </div>
            </ReactCardFlip>
        </div>
    )
}

export default CardFlip
